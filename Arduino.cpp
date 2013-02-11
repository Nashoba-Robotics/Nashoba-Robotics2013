/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2008. All Rights Reserved.                                                         */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#include "Arduino.h"
#include "DigitalModule.h"
#include "NetworkCommunication/UsageReporting.h"
#include "I2C.h"

const UINT8 Arduino_I2C::kAddress;
const UINT8 Arduino_I2C::kDataRegister;

Arduino_I2C::Arduino_I2C(UINT8 moduleNumber)
        : m_i2c (NULL)
{
        DigitalModule *module = DigitalModule::GetInstance(moduleNumber);
        if (module)
        {
                m_i2c = module->GetI2C(kAddress);

        }
}

Arduino_I2C::~Arduino_I2C()
{
        delete m_i2c;
        m_i2c = NULL;
}

double Arduino_I2C::GetForce(int sensor)
{
        INT16 rawForce = 0;
        if(m_i2c)
        {
                m_i2c->Read(kDataRegister, sizeof(rawForce), (UINT8 *)&rawForce);

                // Sensor is little endian... swap bytes
                rawForce = ((rawForce >> 8) & 0xFF) | (rawForce << 8);
        }
        printf("force %d \n", rawForce);
        return rawForce;
}
