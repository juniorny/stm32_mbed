#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

Ticker toggle_led_ticker;

void toggle_led() 
	{
    led1 = !led1;
}

int main() {
		toggle_led_ticker.attach(&toggle_led, 0.1);
    while(1) {
        led2 = 1; // LED is ON
        wait(1.0); // 200 ms
        led2 = 0; // LED is OFF
        wait(1.0); // 1 sec
    }
}
