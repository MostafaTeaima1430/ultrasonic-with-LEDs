int echo = 5;
int trig= 4;
long duration,distance;


void setup()
{
 Serial.begin (9600);
 pinMode (echo,INPUT);
 pinMode (trig,OUTPUT);
 pinMode (6,OUTPUT);
 pinMode (7,OUTPUT);
 pinMode (8,OUTPUT);
 pinMode (9,OUTPUT);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  
 digitalWrite(trig,HIGH);
 delayMicroseconds(10); 

 duration=pulseIn (echo,HIGH);
 distance = duration/58.2;
 
 Serial.println(distance);
 delay(10);
  if (distance >= 40){digitalWrite(6,HIGH);}
if (distance <= 40){digitalWrite(6,LOW);}
if (distance >= 60){ digitalWrite(7,HIGH);}
if (distance <= 60){digitalWrite(7,LOW);}
if (distance >= 80){digitalWrite(8,HIGH);}
if (distance <= 80){digitalWrite(8,LOW);}
if (distance >= 120){digitalWrite(9,HIGH);}
if (distance <= 120){digitalWrite(9,LOW);}
  

}
