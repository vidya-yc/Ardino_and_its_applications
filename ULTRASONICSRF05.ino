/*ULTRASONIC SENSOR */

#define ECHOPIN 10        // Pin to receive echo pulse 
#define TRIGPIN 9   // Pin to send trigger pulse
//int led 13;

void setup() 
{ 
 Serial.begin(9600); 
 pinMode(ECHOPIN, INPUT); 
 pinMode(TRIGPIN, OUTPUT); 
}
void loop() 
{ 
 // Start Ranging -Generating a trigger of 10us burst 
 digitalWrite(TRIGPIN, LOW); 
 delayMicroseconds(2); 
 digitalWrite(TRIGPIN, HIGH); 
 delayMicroseconds(10); 
 digitalWrite(TRIGPIN, LOW);
 // Distance Calculation
 float distance = pulseIn(ECHOPIN, HIGH); 
 distance= distance/58; 

 Serial.print(distance); 
 Serial.println(" cm");
 delay(100);

  if(distance<30){
  digitalWrite(13,HIGH);
  }
  else
  {
      digitalWrite(13,LOW);
      }

    
  }
  

