/* 
 * File: pin_config.h
 * Purpose: Hardware abstraction for PIC16F877A Line Robot
 */

#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

#include <xc.h>

// IR Sensors
#define IR_SENSOR_1         PORTCbits.RC5
#define IR_SENSOR_2         PORTDbits.RD4
#define IR_SENSOR_3         PORTDbits.RD5
#define IR_SENSOR_4         PORTDbits.RD6
#define IR_SENSOR_5         PORTDbits.RD7

#define IR_SENSOR_1_DIR     TRISCbits.TRISC5
#define IR_SENSOR_2_DIR     TRISDbits.TRISD4
#define IR_SENSOR_3_DIR     TRISDbits.TRISD5
#define IR_SENSOR_4_DIR     TRISDbits.TRISD6
#define IR_SENSOR_5_DIR     TRISDbits.TRISD7


// Motor Direction
#define L_IN1           PORTCbits.RC0
#define L_IN2           PORTCbits.RC3
#define R_IN3           PORTDbits.RD0
#define R_IN4           PORTDbits.RD1

#define L_IN1_DIR       TRISCbits.TRISC0
#define L_IN2_DIR       TRISCbits.TRISC3
#define R_IN3_DIR       TRISDbits.TRISD0
#define R_IN4_DIR       TRISDbits.TRISD1

// Motor Speed (PWM) 
// Left = RC1 (CCP2), Right = RC2 (CCP1)
#define L_PWM           PORTCbits.RC1   // CCP2
#define R_PWM           PORTCbits.RC2   // CCP1

#define L_PWM_DIR       TRISCbits.TRISC1
#define R_PWM_DIR       TRISCbits.TRISC2


// Ultrasonic
#define TRIG_PIN        PORTDbits.RD2
#define ECHO_PIN        PORTDbits.RD3

// TRIS for Ultrasonic
#define TRIG_DIR        TRISDbits.TRISD2
#define ECHO_DIR        TRISDbits.TRISD3


// Buzzer
#define BUZZER_PIN      PORTAbits.RA5
#define BUZZER_DIR      TRISAbits.TRISA5

// LCD pinout
#define LCD_RS          PORTBbits.RB5
#define LCD_EN          PORTBbits.RB4
#define LCD_D4          PORTBbits.RB3
#define LCD_D5          PORTBbits.RB2
#define LCD_D6          PORTBbits.RB1
#define LCD_D7          PORTBbits.RB0

// LCD TRIS
#define LCD_RS_Direction  TRISBbits.TRISB5
#define LCD_EN_Direction  TRISBbits.TRISB4
#define LCD_D4_Direction  TRISBbits.TRISB3
#define LCD_D5_Direction  TRISBbits.TRISB2
#define LCD_D6_Direction  TRISBbits.TRISB1
#define LCD_D7_Direction  TRISBbits.TRISB0

#endif
