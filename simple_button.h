#ifndef SIMPLE_BUTTON_H
#define SIMPLE_BUTTON_H

#include <Arduino.h>


class SimpleButton{
  public:
    SimpleButton(int pin, bool input_pullup = true);
    bool get_click();
    bool get_state();

  private:
    int pin;
    bool input_pullup;
    bool state = false;
    bool last_state = false;


};


#endif