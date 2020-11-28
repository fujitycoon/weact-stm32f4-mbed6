#include "mbed.h"
#include "USBSerial.h"

USBSerial serial;
DigitalOut led(LED1);

int main(void)
{   
    while (1) {
        serial.printf("Mbed OS version: %d.%d.%d\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION); 
        serial.printf("Target: %s\n", MBED_STRINGIFY(TARGET_NAME));
        serial.printf("SystemCoreClock = %u\n\n", SystemCoreClock);
        led = !led;
        ThisThread::sleep_for(1s);
    }
}
