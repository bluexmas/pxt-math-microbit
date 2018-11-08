#include "pxt.h"

//% color=#D400D4 weight=111 icon="\uf192"
namespace input1 {

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