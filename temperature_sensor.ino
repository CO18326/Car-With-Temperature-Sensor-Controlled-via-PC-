                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        float temp;
int tempPin = 0;
int ir=10;

const int trigPin = 9;
const int echoPin = 10;
// defines variables
long cm;
long duration;
int distance;


void setup(){
  pinMode(7,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
 pinMode(echoPin,INPUT);
  pinMode(9,OUTPUT);
  pinMode(ir,INPUT);
 // pinMode(22,INPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(23,OUTPUT);
  //digitalWrite(22,HIGH);
  Serial.begin(9600);
  }

 void loop(){
 digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
cm=microsecondsToCentimeters(duration);
// Prints the distance on the Serial Monitor

  if(Serial.available()>0){
char x=Serial.read();
if(x=='s'){
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
   //digitalWrite(22,HIGH);
   //tone(22,1000,5);
   }
if(x=='l'){
  digitalWrite(4,LOW);
  
  
  delay(1000);
  digitalWrite(4,HIGH);
 }

if(x=='r'){
  
  digitalWrite(8,LOW);
  delay(1000);
  digitalWrite(8,HIGH);
  }

if(x=='e'){
  digitalWrite(4,LOW);
  digitalWrite(8,LOW);
  //noTone(22);
  }
if(x=='t'){
 temp = analogRead(tempPin);
    temp =temp * 0.48828125;
    Serial.print("Temprature = ");
    Serial.print(temp);
    Serial.println("*C");}
if(x=='u'){
 /*digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
cm=microsecondsToCentimeters(duration);*/
  Serial.println(cm);}
if(x=='w'){
  digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
     digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    }
else{
// int p= toInt(x);
  
  }
} 
int r;
r=digitalRead(10);
while(r==LOW){
  digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
     digitalWrite(6,LOW);
    digitalWrite(7,HIGH); //for running the motor anti-clock wise put it high**
r=digitalRead(10);if(r==HIGH){digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
     digitalWrite(6,HIGH);
    digitalWrite(7,LOW);}}
  /* if(x=='b'){
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
   }
   if(x=='c'){
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
   }
   //if(x=='d'){
    //digitalWrite(3,LOW);
    //digitalWrite(4,LOW);
  }*/
   
   digitalWrite(24,LOW);
   digitalWrite(12,HIGH);
  // digitalWrite(7,HIGH);
   //digitalWrite(9,HIGH);
    digitalWrite(5,HIGH);
/*    if(digitalRead(ir)==LOW){
          //digitalWrite(22,HIGH);
          //tone(22,10000);     
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
    }*/ 
   //noTone(22);
    
 }
long microsecondsToCentimeters(long mn){
  return mn/74/2;
}
