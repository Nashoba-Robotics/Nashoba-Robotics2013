/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2008. All Rights Reserved.                                                         */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#ifndef __ARDUINO_I2C_h__
#define __ARDUINO_I2C_h__

#include "SensorBase.h"

class I2C;

class Arduino_I2C : public SensorBase
{
protected:
        static const UINT8 kAddress = 0x02;
        static const UINT8 kDataRegister = 0x32;

public:
        explicit Arduino_I2C(UINT8 moduleNumber);
        virtual ~Arduino_I2C();
        virtual double GetForce(int sensor);

protected:
        I2C* m_i2c;
};

#endif

