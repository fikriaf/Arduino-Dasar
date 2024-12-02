int pinled13 = 13;
int pinled2 = 2;
int pinled3 = 3;
int sensor = 4;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinled13, OUTPUT);
  pinMode(pinled2, OUTPUT);
  pinMode(pinled3, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  val = digitalRead(sensor);
  if (val == 0){
    Serial.println("TERDETEKSI");
    digitalWrite(pinled2, HIGH);
    digitalWrite(pinled13, HIGH);
    digitalWrite(pinled3, HIGH);
  } else {
    Serial.println("NONE");
    digitalWrite(pinled2, LOW);
    digitalWrite(pinled13, LOW);
    digitalWrite(pinled3, LOW);
  }
}
