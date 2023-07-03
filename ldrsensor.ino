
int sensorPin = A0; // select the input pin for LDR
int sensorValue = 0; // variable to store the value coming from the sensor


int ledPin = 13;

void setup() {
Serial.begin(9600); //sets serial port for communication
pinMode(ledPin, OUTPUT);
}
void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

if(sensorValue<450)
      {
    digitalWrite(ledPin, LOW);
       }
else {
  digitalWrite(ledPin, HIGH);
     }

delay(100);
}
