const int potPin = 0;     // potentiometer wiper (middle terminal) connected to analog pin 0 - outside leads to ground and +5V
const int buzzerPin = 9;     // the number of the piezo buzzer pin

int potVal = 0;           // variable to store the value read from the potentiometer
int buzzerPitch = 0;

void setup()

{
  // declare pin 9 to be an output for the buzzer:
  pinMode(buzzerPin, OUTPUT);
}

void loop()

{
  potVal = analogRead(potPin);    // read the input pin
  buzzerPitch = map(potVal, 0, 1023, 0, 255); // Map the analogue range (0-1023) to the pwm range (0-255)
  analogWrite(buzzerPin, buzzerPitch); //very the pitch of the buzzer depending on the position of the Potentiometer
  delay(100);
}
