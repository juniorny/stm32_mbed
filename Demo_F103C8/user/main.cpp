#include "mbed.h"

DigitalOut led1(LED1);

int main() {
    while(1) {
        led1 = 1; // LED is ON
        wait(0.1); // 200 ms
        led1 = 0; // LED is OFF
        wait(0.1); // 1 sec
    }
}
