// Motor A
#define IN1 11
#define IN2 10

// Motor B
#define IN3 9
#define IN4 8
#define ENB 6

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);


  // Set speed for Motor B (0–255)
  analogWrite(ENB, 200);
}

void loop() {
  // Motor A Forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // Motor B Forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
