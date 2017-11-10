/*
 Piezo
 
 This example shows how to run a Piezo Buzzer on pin 9
 using the analogWrite() function.
 
 It beeps 3 times fast at startup, waits a second then beeps continuously
 at a slower pace
 
 */

void setup()  { 
  // declare pin 9 to be an output:
  pinMode(9, OUTPUT);
  
} 

void loop()  { 
    analogWrite(9, 2);      // Almost any value can be used except 0 and 255
                           // experiment to get the best tone
  delay(500);          // wait for a delayms ms
  analogWrite(9, 0);       // 0 turns it off
  delay(500);          // wait for a delayms ms 
}


