#include "mbed.h"

void Led(DigitalOut &ledpin, n)
{
   for (int i = 0; i < 2 * n; ++i)
   {                     //blink for n times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(100ms);
   }
}