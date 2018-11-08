#include "pxt.h"

//% color=50 weight=80
//% icon="\uf1eb"
namespace MATH { 

    /**
     * Gets the temperature in Celsius degrees (°C).
     */
    //% weight=55
    //% help=input/temperature
    //% blockId=device_temperature block="temperature (°C)" blockGap=8
    //% parts="thermometer"
    int temperature() {
        return uBit.thermometer.getTemperature();
    }
}