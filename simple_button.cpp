#include "simple_button.h"

SimpleButton::SimpleButton(int pin, bool input_pullup){
  _pin = pin;
  pinMode(_pin, INPUT);
}