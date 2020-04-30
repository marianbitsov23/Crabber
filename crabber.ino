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
   
  if(command == 'F') {
    //spin left motor clockwise
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    //spin right motor clockwise
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }
   
  else if(command == 'B') {
    //spin left motor counterclockwise
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    //spin right motor counterclockwise
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
   
  else if(command == 'R') {
    //spin right motor clockwise
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    //spin left motor counterclockwise
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
  }
   
  else if(command == 'L') {
    //spin left motor clockwise
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    //spin right motor counterclockwise
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
   
  else if(command == 'S') {
    //stop left motor
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    //stop right motor
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }

}
