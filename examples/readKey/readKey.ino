#include <Keypad.h>

Keypad myKeypad;

char key = ' ';

void setup(){
    Serial.begin(9600);
    myKeypad.begin();
    
    // Setting debounce time in millisecond
    myKeypad.setDebounceTime(350);
    // If not specified deboucne time is 300ms
}

void loop(){
    key = myKeypad.read();
    if(key != NONE) Serial.println(key);
    
    delay(500);
}
