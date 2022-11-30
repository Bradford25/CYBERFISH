int motor1pin1 = 2; int motor1pin2 = 3;
int motor2pin1 = 4; int motor2pin2 = 5;
const int ldrPinLEFT = A0; const int ldrPinRIGHT = A1;
 
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);

  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(9, OUTPUT);   pinMode(10, OUTPUT);
  pinMode(ldrPinLEFT, INPUT);
  pinMode(ldrPinRIGHT, INPUT);

}
 
void loop() {
  
  //Controlling speed (0 = off and 255 = max speed):
  analogWrite(9, 100); //ENA pin
  analogWrite(10, 100); //ENB pin
  
  int ldrPinLEFTstatus = analogRead(ldrPinLEFT); 
  int ldrPinRIGHTstatus = analogRead(ldrPinRIGHT);

  //Printing values of the sensors to the serial monitor
  Serial.println(ldrPinLEFTstatus);
  Serial.println(ldrPinRIGHTstatus);
  //light detected by both
  
  if(ldrPinLEFTstatus>=50 && ldrPinRIGHTstatus>=50){
    //Forward
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  }
  //light detected by left sensor
  else if(ldrPinLEFTstatus>=50 && ldrPinRIGHTstatus<50){
    //turn left
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
    
  }
  //light detected by right sensor
  else if(ldrPinLEFTstatus<50 && ldrPinRIGHTstatus>=50){
    //turn right
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
   
  }
  //light detected by none
  else if(ldrPinLEFTstatus<50 && ldrPinRIGHTstatus<50){
    //stop
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
  
  } 
} 