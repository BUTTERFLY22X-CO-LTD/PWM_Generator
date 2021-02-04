const int IN1 =5;
const int IN2 = 4;
const int ENA = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (ENA, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ENA, 178.5); //ต่อที่ 3
  digitalWrite(IN1, HIGH); //ต่อที่ IN4 OUT นอกเป็น + 
  digitalWrite(IN2, LOW); //ต่อที่ IN5
}
