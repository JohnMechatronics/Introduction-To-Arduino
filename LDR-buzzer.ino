
 
const int photocellPin = 0;     // the cell and 10K pulldown are connected to a0
const int buzzerPin = 9;     // the number of the piezo buzzer pin

int photocellVal;     // the analog reading from the sensor divider
int buzzerPitch = 0;

void setup() {
   // declare pin 9 to be an output for the buzzer:
  pinMode(buzzerPin, OUTPUT);
  
}
 
void loop() {
  photocellVal = analogRead(photocellPin);  // read the input from the LDR
  buzzerPitch = map(photocellVal, 0, 1023, 0, 255); // Map the analogue range (0-1023) to the pwm range (0-255)
  analogWrite(buzzerPin, buzzerPitch); //very the pitch of the buzzer depending on the light falling on the LDR (Photocell)
}
