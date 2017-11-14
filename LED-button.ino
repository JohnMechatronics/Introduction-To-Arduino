

const int buttonPin = 2;     // the number of the push button pin
const int ledPin = 9;     // the number of the led pin
int buttonState  = LOW;  //variable to store the button state



void setup() {
  // initialize LED digital pin as an output.
  pinMode(ledPin, OUTPUT);
    // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)    
  } else {
    // turn off the LED
    digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  }
}
