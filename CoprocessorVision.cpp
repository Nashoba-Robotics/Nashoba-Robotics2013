#include "CoprocessorVision.h"
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/socket.h>
#include <resolvLib.h>
#include <arpa/inet.h>
#include <sockLib.h>
#include <inetLib.h>
#include <hostLib.h>
#include <ioLib.h>
#include <string>
#include <algorithm>
#include <sstream>

#define BUFFERSIZE		1024
#define MY_PORT		    9999

#include <ctype.h>

CoprocessorVision::CoprocessorVision(){}

CoprocessorVision * CoprocessorVision::instance = 0;

CoprocessorVision * CoprocessorVision::getInstance()
{
	return instance;
}

void alltoupper(std::string s)
{
	std::string out;
	out.resize( s.size() );

	std::transform( s.begin(), s.end(), out.begin(), (int (*)(int)) std::toupper );
}

int CoprocessorVision::run()
{
	char buffer[BUFFERSIZE];
	struct sockaddr_in clientaddr;
	struct sockaddr_in addr;
	int sd,  bytes_read;
	int addr_size;

	sd = socket(AF_INET, SOCK_DGRAM, 0);
	if ( sd == ERROR )
	{
		perror("socket");
		return -1;
	}
	addr_size = sizeof (sockaddr_in);
	bzero ((char*) &addr, sizeof (addr));
	bzero ((char*) &clientaddr, sizeof (clientaddr));
	addr.sin_family = AF_INET;
	addr.sin_len = sizeof (struct sockaddr_in);
	addr.sin_port = htons(500);
	addr.sin_addr.s_addr = htonl (INADDR_ANY);
	if ( bind(sd, (struct sockaddr*)&addr, addr_size) == ERROR )
	{
		perror("bind");
		return -1;
	}
	do
	{
		bzero(buffer, BUFFERSIZE);
//		printf("sd = %d, BUFFERSIZE = %d", sd, BUFFERSIZE);
		bytes_read = recvfrom(sd, buffer, BUFFERSIZE, 0, (struct sockaddr*)&clientaddr, &addr_size);
		
		if ( bytes_read > 0 )
		{
			float distance, angle, tension, anglePerp;
			int rCounter;
			rCounter = sscanf(buffer, "Rect Distance=%f:Angle=%f:Tension=%f", &distance, &angle, &tension);
			if(rCounter == 3)
			{
				SmartDashboard::PutNumber("Distance", distance);
				SmartDashboard::PutNumber("Angle", angle);
				SmartDashboard::PutNumber("Tension", tension);
				SmartDashboard::PutNumber("GyroAngle", Robot::drive->getGyroAngle());
			}
			else
			{
				rCounter = sscanf(buffer, "Pole Distance=%f:Angle=%f:AnglePerp=%f", &distance, &angle, &anglePerp);
				if(rCounter == 3)
				{
					SmartDashboard::PutNumber("Pole Distance", distance);
					SmartDashboard::PutNumber("Pole Angle", angle);
					SmartDashboard::PutNumber("Pole AnglePerp", anglePerp);
					SmartDashboard::PutNumber("GyroAngle", Robot::drive->getGyroAngle());
				}
			}
			
			std::stringstream ss;
			ss << buffer;
			alltoupper( ss.str() );

			if ( sendto(sd, buffer, bytes_read, 0, (struct sockaddr*)&clientaddr, addr_size) == ERROR )
				perror("reply");
		}
		else
		{	
			printf ("Error: %d \n", errno);
			perror("recvfrom");
			
		}	
	}
	while ( bytes_read > 0 );
	close(sd);
	return 0;
}	
