#define motor1 8
#define motor2 9
#define speed 6

void forward() {
  analogWrite(speed,180); 
  digitalWrite(motor1,LOW);
  digitalWrite(motor2,HIGH);
  delay(630);
  digitalWrite(motor1,LOW);
  digitalWrite(motor2,LOW);
}

void back() {
  analogWrite(speed,255); //for a quick pump up to motor 
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,LOW);
  delay(50);
  analogWrite(speed,180); //slow it down again no need for full power 
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,LOW);
  delay(900);
  digitalWrite(motor1,LOW); //stop the motor
  digitalWrite(motor2,LOW);
}

void setup() {
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(speed,OUTPUT);
  forward();
  delay(2000);
  back();

}


void loop() {

}
