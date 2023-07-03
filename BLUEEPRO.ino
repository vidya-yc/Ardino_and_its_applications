/*USE "BLUETOOTH SPP PRO" app to operate this code*/


#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10); 
int ledpin=13; 
int Data; 
void setup() 
{
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
}

void loop()
{
   if (Serial.available())
{
  
Data=Serial.read();
if(Data=='1')
{  
  digitalWrite(ledpin,HIGH);
  Serial.println("LED On! ");
  }
else  if (Data=='0')
{
 digitalWrite(ledpin,LOW);
  Serial.println("LED Off! ");
 }
}
}
