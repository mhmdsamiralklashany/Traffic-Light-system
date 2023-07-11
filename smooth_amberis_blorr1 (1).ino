void setup() {
  pinMode(11,OUTPUT);
 pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {

digitalWrite(11, HIGH);   
delay(1000);
  
digitalWrite(7, HIGH);
delay(1000);
digitalWrite(7 , LOW);
delay(1000);
digitalWrite(7, HIGH);   
delay(1000);
digitalWrite(7 , LOW);
delay(1000);
digitalWrite(7, HIGH);
delay(1000);
digitalWrite(7 , LOW);
  delay(200);
  
digitalWrite(7,LOW); 
digitalWrite(11 , LOW);
digitalWrite(2, HIGH);
delay(1000);
digitalWrite(2 , LOW);
delay(1000);

}