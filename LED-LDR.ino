

 
const int photocellPin = A0;     // the cell and 10K pulldown are connected to a0
const int ledPin = 9;     // the number of the LED pin

int photocellVal;     // the analog reading from the sensor divider
int ledBrightness = 0; // will be used to alter the brightness of a LED

void setup() {
  Serial.begin(9600);     
   // declare pin 9 to be an output for the buzzer:
  pinMode(photocellPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
 
void loop() {
  photocellVal = analogRead(photocellPin);  // read the input from the LDR
  ledBrightness = map(photocellVal, 0, 1023, 255, 0); // Map the analogue range (0-1023) to the pwm range (0-255)

  
  if (ledBrightness > 120){ //create a threashold to switch light on
  analogWrite(ledPin, ledBrightness); //very the pitch of the buzzer depending on the light falling on the LDR (Photocell)
  } else {
    analogWrite(ledPin, 0);
   }
  




}
