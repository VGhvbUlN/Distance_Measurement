const char echoPin = 7;
const char pulsePin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(pulsePin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
