//Define Input Pins
#define joyX A0
#define joyY A1
#define joyRX A3
#define joyRY A2
#define joySw 10
#define joySw1 13
#define joyTri 5
#define joyCir 2
#define joyEx 3
#define joySqu 4
#define joyLeft 8
#define joyRight 7
#define joyUp 9
#define joyDown 6
#define joyRT 12
#define joyLT 11

#include <Joystick.h>
Joystick_ Joystick(0x15, JOYSTICK_TYPE_JOYSTICK, 12, 0, true, true, true, false, false, true, false, false, false, false ,false);

const bool initAutoSendState = true;

int xAxis_ = 0;
int yAxis_ = 0;
int RxAxis_ = 0;
int RyAxis_ = 0;

int lastButtonSwState =0;
int lastButtonSw1State =0;
int lastButtonTriState =0;
int lastButtonCirState =0;
int lastButtonExState =0;
int lastButtonSquState =0;
int lastButtonLeftState =0;
int lastButtonRightState =0;
int lastButtonUpState =0;
int lastButtonDownState =0;
int lastButtonRTState =0;
int lastButtonLTState =0;


void setup(){
  pinMode(joySw, INPUT_PULLUP);
  pinMode(joySw1, INPUT_PULLUP);
  pinMode(joyTri, INPUT_PULLUP);
  pinMode(joyCir, INPUT_PULLUP);
  pinMode(joyEx, INPUT_PULLUP);
  pinMode(joySqu, INPUT_PULLUP);
  pinMode(joyLeft, INPUT_PULLUP);
  pinMode(joyRight, INPUT_PULLUP);
  pinMode(joyUp, INPUT_PULLUP);
  pinMode(joyDown, INPUT_PULLUP);
  pinMode(joyRT, INPUT_PULLUP);
  pinMode(joyLT, INPUT_PULLUP);

  Joystick.begin();
}

void loop(){
  xAxis_ = analogRead(joyX);
  xAxis_ = map(xAxis_, 0, 1023, 0, 255);
  Joystick.setXAxis(xAxis_);
  
  yAxis_ = analogRead(joyY);
  yAxis_ = map(yAxis_, 0, 1023, 0, 255);
  Joystick.setYAxis(yAxis_);

  RxAxis_ = analogRead(joyRX);
  RxAxis_ = map(RxAxis_, 0, 1023, 0, 255);
  Joystick.setZAxis(RxAxis_);
  
  RyAxis_ = analogRead(joyRY);
  RyAxis_ = map(RyAxis_, 0, 1023, 0, 255);
  Joystick.setRzAxis(RyAxis_);

  int currentButtonSwState = !digitalRead(joySw);
  if (currentButtonSwState != lastButtonSwState) {
    Joystick.setButton(0,currentButtonSwState ); 
    lastButtonSwState = currentButtonSwState;
  }

  int currentButtonTriState = !digitalRead(joyTri);
  if (currentButtonTriState != lastButtonTriState) {
    Joystick.setButton(1,currentButtonTriState ); 
    lastButtonTriState = currentButtonTriState;
  }

  int currentButtonCirState = !digitalRead(joyCir);
  if (currentButtonCirState != lastButtonCirState) {
    Joystick.setButton(2,currentButtonCirState ); 
    lastButtonCirState = currentButtonCirState;
  }

  int currentButtonExState = !digitalRead(joyEx);
  if (currentButtonExState != lastButtonExState) {
    Joystick.setButton(3,currentButtonExState ); 
    lastButtonExState = currentButtonExState;
  }

  int currentButtonSquState = !digitalRead(joySqu);
  if (currentButtonSquState != lastButtonSquState) {
    Joystick.setButton(4,currentButtonSquState ); 
    lastButtonSquState = currentButtonSquState;
  }

  int currentButtonSw1State = !digitalRead(joySw1);
  if (currentButtonSw1State != lastButtonSw1State) {
    Joystick.setButton(5,currentButtonSw1State ); 
    lastButtonSw1State = currentButtonSw1State;
  }

  int currentButtonLeftState = !digitalRead(joyLeft);
  if (currentButtonLeftState != lastButtonLeftState) {
    Joystick.setButton(6,currentButtonLeftState ); 
    lastButtonLeftState = currentButtonLeftState;
  }

  int currentButtonRightState = !digitalRead(joyRight);
  if (currentButtonRightState != lastButtonRightState) {
    Joystick.setButton(7,currentButtonRightState ); 
    lastButtonRightState = currentButtonRightState;
  }

  int currentButtonUpState = !digitalRead(joyUp);
  if (currentButtonUpState != lastButtonUpState) {
    Joystick.setButton(8,currentButtonUpState ); 
    lastButtonUpState = currentButtonUpState;
  }

  int currentButtonDownState = !digitalRead(joyDown);
  if (currentButtonDownState != lastButtonDownState) {
    Joystick.setButton(9,currentButtonDownState ); 
    lastButtonDownState = currentButtonDownState;
  }
  
  int currentButtonRTState = !digitalRead(joyRT);
  if (currentButtonRTState != lastButtonRTState) {
    Joystick.setButton(10,currentButtonRTState ); 
    lastButtonRTState = currentButtonRTState;
  }

  int currentButtonLTState = !digitalRead(joyLT);
  if (currentButtonLTState != lastButtonLTState) {
    Joystick.setButton(11,currentButtonLTState ); 
    lastButtonLTState = currentButtonLTState;
  }
delay(10);
}
