#include <Arduino.h>
#include <CMMC_LED.h>

CMMC_LED instance1(2, LOW);
CMMC_LED instance2(3, LOW);
CMMC_LED instance3(4, LOW);

void setup()
{
  instance1.init();
  instance2.init();
  instance3.init();
}

void loop()
{
  instance1.toggle();
  instance2.toggle();
  instance3.toggle();
}
