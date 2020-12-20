#define trigPin 9
#define echoPin 8


void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  Serial.println(distance);
  delay(1);

  if(distance <= 20) {
    digitalWrite(2, HIGH);
    delay(50);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(50);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(50);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(50);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(50);
    digitalWrite(6, LOW);
    digitalWrite(6, HIGH);
    delay(50);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(50);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    delay(50);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(50);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    delay(50);
    digitalWrite(2, LOW);
    
  } else {
    Serial.println("Tidak Mendeteksi");
    }
}
