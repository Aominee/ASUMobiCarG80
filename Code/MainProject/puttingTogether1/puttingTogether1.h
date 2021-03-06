/*
 * puttingTogether1.h
 *
 * Created: 3/29/2018 3:31:19 PM
 *  Author: Lamees
 */ 


#ifndef PUTTINGTOGETHER1_H_
#define PUTTINGTOGETHER1_H_

#include <avr/io.h>
#include <math.h>
#include "MACROS.h"
#include "MICROCONFIG.h"
#include "STD_TYPES.h"
#include "Timer0.h"
#include "Timer2.h"
#include "USART_AVR.h"
#include "Commands.h"
#include "MotorDriver.h"
#include "SteeringMech.h"
#include "LineFollower.h"
#include "MPU6050_res_define.h"							/* Include MPU6050 register define file */
#include "I2C_Master_H_file.h"							/* Include I2C Master header file */

void init();

#endif /* PUTTINGTOGETHER1_H_ */