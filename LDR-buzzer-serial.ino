
 
const int photocellPin = 0;     
const int buzzerPin = 9;     

int photocellVal;     
int buzzerPitch = 0;

void setup() {
  Serial.begin(9600);      // open the serial port at 9600 bps:
  pinMode(buzzerPin, OUTPUT);
  
}
 
void loop() {
  photocellVal = analogRead(photocellPin);  
  buzzerPitch = map(photocellVal, 0, 1023, 0, 255); 

  delay(100);
  
  Serial.print("Original Value = "); //Send text to the Serial port
  Serial.println(photocellVal); //Send Original Value to the Serial port and start new line 
  Serial.print("Mapped Value = "); //Send text to the Serial port
  Serial.println(buzzerPitch); //Send Original Value to the Serial port and start new line 
  
  analogWrite(buzzerPin, buzzerPitch);
}
