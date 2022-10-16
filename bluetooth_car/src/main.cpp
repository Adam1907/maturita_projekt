#include <Arduino.h>

char command; 
const int IN1 = 7;
const int IN2 = 6;
const int IN3 = 5;
const int IN4 = 4;

void forward()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  Serial.println("FORWARD");
}

void left()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  Serial.println("LEFT");
}

void right()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  Serial.println("RIGHT");
}

void backward()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  Serial.println("BACKWARD");
}

void Stop()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  Serial.println("STOP");
}

void setup() 
{  
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);     
  Serial.begin(9600);
}

void loop(){
  if(Serial.available() > 0){ 
    command = Serial.read(); 
    Serial.println(command);
    switch(command){
    case '1':  
      forward();
      break;
    case '2':  
       backward();
      break;
    case '3':  
       left();
      break;
    case '4':  
       right();
      break;
    case '5':  
       Stop();
      break;
    }
  } 
}