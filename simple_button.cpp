#include "simple_button.h"

SimpleButton::SimpleButton(int pin, bool input_pullup){
  this->pin = pin;
  this->input_pullup = input_pullup;
  if (input_pullup){
    pinMode(pin, INPUT_PULLUP);
  } else {
    pinMode(pin, INPUT);
  }
}


bool SimpleButton::get_click(){
  if (this->input_pullup){
    this->state = !digitalRead(this->pin);
  } else {
    this->state = digitalRead(this->pin);
  }
  bool is_clicked = this->state && !this->last_state;
  this->last_state = this->state;
  
  return is_clicked; 

}

bool SimpleButton::get_state(){
  if (this->input_pullup){
    return !digitalRead(this->pin);
  } else {
    return digitalRead(this->pin);
  }
}