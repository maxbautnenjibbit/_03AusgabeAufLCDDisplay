/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "LCD.h"

lcd myLCD;

int main()
{
    myLCD.cursorpos(1);
    /*myLCD.clear();

    myLCD.printf("Zahl: 1");
    */

    myLCD.clear();
    
    //int zahl = 0;
    //int zahl = 100;

    
    //myLCD.printf("Hallo Welt!");

    myLCD.printf("Hallo Welt!");
    myLCD.cursorpos(64);
    myLCD.printf("Hier ist Sindelfingen.");

    while (true) {
        /*
        zahl++;
        myLCD.printf("Zahl: %d", zahl);
        ThisThread::sleep_for(500ms);

        myLCD.clear();
        */

        /*zahl++;
        myLCD.printf("Zahl: %d", zahl);
        ThisThread::sleep_for(100ms);

        myLCD.clear();

        if (zahl >= 100) {
            break;
        }*/

        /*zahl--;
        myLCD.printf("Zahl: %d", zahl);
        ThisThread::sleep_for(100ms);

        myLCD.clear();

        if (zahl <= 0) {
            break;
        }*/
    }
}