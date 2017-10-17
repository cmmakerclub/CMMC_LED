#ifndef CMMC_LED_H
#define CMMC_LED_H

#include <Arduino.h>


#ifndef CMMC_NO_ALIAS
  #define CMMC_LED CMMC_LED
#endif

#ifdef ESP8266
  extern "C" {
    #include "user_interface.h"
  }
  #include "ESP8266WiFi.h"
  #include <functional>
#endif

typedef void (*cmmc_debug_cb_t)(const char* message);

class CMMC_LED
{
    public:
      // constructor
      CMMC_LED(int led = LED_BUILTIN, bool state = LOW) {
        auto blank = [](const char* message) {};
        _led = led;
        _led_state = state;
      }

      ~CMMC_LED() {}

      void init();
      void toggle();

      void set(uint8_t status) {
        digitalWrite(this->_led, status);
      };

      void low() {
        this->set(LOW);
      };

      void high() {
        this->set(HIGH);
      };
      
      void debug(cmmc_debug_cb_t);
    private:
      cmmc_debug_cb_t _user_debug_cb;
      uint8_t _led_state = LOW;
      int _led;

};

#endif //CMMC_LED_H
