// #include<IRremote.h>
// const int RemotePin=8;
// IRrecv irrecv(RemotePin);
// decode_results results;

int ENA = 3;
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int ENB = 9;

int baseSpeed = 200;     // forward speed (0–255)
int turnFactor = 100;    // how much to slow one side when turning


// int in1=3;
// int in2=5;
// int in3=6;
// int in4=9;

// void setup() {
//   Serial.begin(9600);
//   // irrecv.enableIRIn();
//   pinMode(IN1, OUTPUT);
//   pinMode(IN2, OUTPUT);
//   pinMode(IN3, OUTPUT);
//   pinMode(IN4, OUTPUT);
    
// }

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENA, OUTPUT); // Controls Motor A = Front Left motor & Rear Left motor
  pinMode(ENB, OUTPUT); // Controls Motor B = Front Right motor & Rear Right motor

  // analogWrite(ENA, 200); // Controls Motor A = Front Left motor & Rear Left motor
  // analogWrite(ENB, 200); // Controls Motor B = Front Right motor & Rear Right motor
}

void loop() {
  
  Forward();
    }
   
 

// void Forward() {
//   // Left motor (A)
//   digitalWrite(ENA, HIGH);
//   digitalWrite(ENB, HIGH);
//   digitalWrite(IN1, HIGH);
//   digitalWrite(IN2, LOW);

//   // Right motor (B)
//   digitalWrite(IN3, HIGH);
//   digitalWrite(IN4, LOW);
// }

void Forward() {
  analogWrite(ENA, baseSpeed);
  analogWrite(ENB, baseSpeed);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void Backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void Stop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

// void Left() {
//   digitalWrite(IN1, LOW);
//   digitalWrite(IN2, LOW);   // left stopped

//   digitalWrite(IN3, HIGH);
//   digitalWrite(IN4, LOW);   // right forward
// }

void Left() {
  analogWrite(ENA, baseSpeed - turnFactor); // slow left side
  analogWrite(ENB, baseSpeed);              // full right side

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// void Right() {
//   digitalWrite(IN1, HIGH);
//   digitalWrite(IN2, LOW);   // left forward

//   digitalWrite(IN3, LOW);
//   digitalWrite(IN4, LOW);   // right stopped
// }

void Right() {
  analogWrite(ENA, baseSpeed);              // full left side
  analogWrite(ENB, baseSpeed - turnFactor); // slow right side

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
