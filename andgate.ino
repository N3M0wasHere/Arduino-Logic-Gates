const int out = 10;
const int in1 = 13;
const int in2 = 12;
const int in3 = 11;
int in1State = 0;
int in2State = 0; 
int in3State = 0;

void setup() {
  pinMode(out,OUTPUT);
  pinMode(in1,INPUT);
  pinMode(in2,INPUT);
  pinMode(in3,INPUT);
}

void loop() {
  in1State = digitalRead(in1);
  in2State = digitalRead(in2);
  in3State = digitalRead(in3);

  if(in1State == HIGH &&(in2State == HIGH &&(in3State == HIGH))){
    digitalWrite(out,HIGH);
    }
  else{
    digitalWrite(out,LOW);
    }
}
