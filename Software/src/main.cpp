#include <Arduino.h>
#include <Keyboard.h>

// config options
const int button0 = 2;
const int button1 = 3;

// button state variables
int button0state = 0;
int button1state = 0;
int button0last = 0;
int button1last = 0;

void setup() {
  // put your setup code here, to run once:
  // init Keyboard
  Keyboard.begin();
  // init button input with PULLUP
  pinMode(button0, INPUT_PULLUP);
  pinMode(button1, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  // get current state of buttons
  button0state = digitalRead(button0);
  button1state = digitalRead(button1);

  // check current button state and compare with previous
  if (button0last != button0state) {
    if (button0state == LOW) {
      // send button pressed
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press(KEY_F4);
    } else {
      // send button released
      Keyboard.release(KEY_LEFT_GUI);
      Keyboard.release(KEY_F4);
    }
  }

  if (button1last != button1state) {
    if (button1state == LOW) {
      // send button pressed
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(KEY_TAB);
    } else {
      // send button released
      Keyboard.release(KEY_LEFT_ALT);
      Keyboard.release(KEY_TAB);
    }
  }

  button0last = button0state;
  button1last = button1state;

  // small debounce delay
  delay(100);
}