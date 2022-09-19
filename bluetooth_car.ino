#define RED_LED 5

void setup() {
Serial.begin(9600);
 pinMode(RED_LED, OUTPUT);
 }

void loop() {
 if(Serial.available()>0)
   {     
      char data= Serial.read();
      switch(data)
      {
        case 'A': digitalWrite(RED_LED, HIGH);break;
        case 'D': digitalWrite(RED_LED, LOW);break;
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
