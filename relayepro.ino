/* Active low relay module 
  */
#define relay 8

void setup()
{
pinMode(13,OUTPUT);
// pinMode(9,OUTPUT);
}
void loop()
{
digitalWrite(13,LOW);
//digitalWrite(9,HIGH);
Serial.println("Relay on");
 delay(10);
digitalWrite(13,HIGH);
//digitalWrite(9,LOW);
Serial.println("Relay off");
delay(10);
}
