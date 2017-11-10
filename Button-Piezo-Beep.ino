
/*
  Button and buzzer

  Beeps a piezo on pin 9 when when pressing a pushbutton attached to pin 2.

  The circuit:
  - piezo buzzer attached from pin 9 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  john.wild@rca.ac.uk
  
*/



const int buttonPin = 2;     // the number of the pushbutton pin
const int buzzerPin = 9;     // the number of the piezo buzzer pin



// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // declare pin 9 to be an output:
  pinMode(buzzerPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // make the buzzer beep:
    analogWrite(9, 150);     
  } else {
    // turn off the buzzer
    analogWrite(9, 0);       // 0 turns it off
  }
}
