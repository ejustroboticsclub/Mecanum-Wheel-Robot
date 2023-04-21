#define motor_1_p1 2
#define motor_1_p2 3
#define motor_2_p1 4
#define motor_2_p2 7
#define motor_3_p1 8
#define motor_3_p2 9
#define motor_4_p1 12
#define motor_4_p2 13

#define en1 5
#define en2 6
#define en3 10
#define en4 11

// s for speed and it ranges from 0 to 255
const int s1 = 64;
const int s2 = 75;
const int s3 = 75;
const int s4 = 64;
void setup() {
  Serial.begin(38400);
  // put your setup code here, to run once:
  pinMode(motor_1_p1, OUTPUT);
  pinMode(motor_1_p2, OUTPUT);
  pinMode(motor_2_p1, OUTPUT);
  pinMode(motor_2_p2, OUTPUT);
  pinMode(motor_3_p1, OUTPUT);
  pinMode(motor_3_p2, OUTPUT);
  pinMode(motor_4_p1, OUTPUT);
  pinMode(motor_4_p2, OUTPUT);

  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(en3, OUTPUT);
  pinMode(en4, OUTPUT);
}

void loop() {
  analogWrite(en1, s1);
  analogWrite(en2, s2);
  analogWrite(en3, s3);
  analogWrite(en4, s4);
  
  while (Serial.available() == 0) {stopp();}     //wait for data available
  int control = Serial.read();                   //if data is found, it will be stored in control variable 
  if(control!= 10 && control!= 13){              // 10 and 13 are unwanted characters that correspond to newline and carriage return
        
  if(control==119){
    forward();
    delay(10);

    }
  else if(control==97){
    right();
    delay(10);
 
    }
 else if(control==100){
    left();
    delay(10);
 
    }
 else if(control==115){
    backward();
    delay(10);

    }}
}

// Funcations for motor movements 

void backward()
{
  digitalWrite(motor_1_p1, LOW);
  digitalWrite(motor_1_p2, HIGH);

  digitalWrite(motor_2_p1, HIGH);
  digitalWrite(motor_2_p2, LOW);

  digitalWrite(motor_3_p1, LOW);
  digitalWrite(motor_3_p2, HIGH);

  digitalWrite(motor_4_p1, HIGH);
  digitalWrite(motor_4_p2, LOW);

}
void left()
{
  digitalWrite(motor_1_p1, LOW);
  digitalWrite(motor_1_p2, HIGH);

  digitalWrite(motor_2_p1, LOW);
  digitalWrite(motor_2_p2, HIGH);

  digitalWrite(motor_3_p1, LOW);
  digitalWrite(motor_3_p2, HIGH);

  digitalWrite(motor_4_p1, LOW);
  digitalWrite(motor_4_p2, HIGH);


}

void right()
{
  digitalWrite(motor_1_p1, HIGH);
  digitalWrite(motor_1_p2, LOW);

  digitalWrite(motor_2_p1, HIGH);
  digitalWrite(motor_2_p2, LOW);

  digitalWrite(motor_3_p1, HIGH);
  digitalWrite(motor_3_p2, LOW);

  digitalWrite(motor_4_p1, HIGH);
  digitalWrite(motor_4_p2, LOW);
}

void forward()
{
  digitalWrite(motor_1_p1, HIGH);
  digitalWrite(motor_1_p2, LOW);

  digitalWrite(motor_2_p1, LOW);
  digitalWrite(motor_2_p2, HIGH);

  digitalWrite(motor_3_p1, HIGH);
  digitalWrite(motor_3_p2, LOW);

  digitalWrite(motor_4_p1, LOW);
  digitalWrite(motor_4_p2, HIGH);

}


void stopp()
{
  digitalWrite(motor_1_p1, LOW);
  digitalWrite(motor_1_p2, LOW);

  digitalWrite(motor_2_p1, LOW);
  digitalWrite(motor_2_p2, LOW);

  digitalWrite(motor_3_p1, LOW);
  digitalWrite(motor_3_p2, LOW);

  digitalWrite(motor_4_p1, LOW);
  digitalWrite(motor_4_p2, LOW);

}
