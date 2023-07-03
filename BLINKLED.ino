
int LED=13;
          // the setup function runs once when you press reset or power the board
void setup() {
         // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("... LED on ... ");
  delay(500);                       // wait for a second
  
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("*** LED off *** ");
  delay(500);                       // wait for a second
}
