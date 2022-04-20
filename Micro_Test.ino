#include <Keyboard.h> 
void setup() {
  //Start serial connection
  Serial.begin(9600);
  //Configure pins as an input and enable the internal pull-up resistor,
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  Keyboard.begin();
}
void loop() {
//If corresponding button is pressed
  if (digitalRead(2) == LOW) {
    //Send an ASCII 'W',
    Keyboard.write(87);
    Serial.println("W was pushed");
  }
 if (digitalRead(3) == LOW) {
    //Send an ASCII 'A'
    Keyboard.write(65);
    Serial.println("A was pushed");
  }

 if (digitalRead(4) == LOW) {
    //Send an ASCII 'S',
    Keyboard.write(83);
    Serial.println("S was pushed");
  }

 if (digitalRead(5) == LOW) {
    //Send an ASCII 'D',
    Keyboard.write(68);
    Serial.println("D was pushed");
  }
 else {
    Keyboard.releaseAll();
}
}
