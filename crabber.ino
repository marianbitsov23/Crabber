char command;
 
void setup() {
  pinMode(9,OUTPUT);//left motor clockwise
  pinMode(10,OUTPUT);//left motor counterclockwise
  pinMode(11,OUTPUT);//right motor clockwise
  pinMode(12,OUTPUT);//right motor counterclockwise
   
  Serial.begin(9600);
   
}
   
void loop() {
  if(Serial.available()) {
    command = Serial.read();
  }
   
  if(command == '1') {
    //spin left motor clockwise
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    //spin right motor clockwise
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }
   
  else if(command == '2') {
    //spin left motor counterclockwise
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    //spin right motor counterclockwise
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
   
  else if(command == '3') {
    //spin right motor clockwise
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    //spin left motor counterclockwise
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
  }
   
  else if(command == '4') {
    //spin left motor clockwise
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    //spin right motor counterclockwise
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
   
  else if(command == '5') {
    //stop left motor
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    //stop right motor
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }

}
