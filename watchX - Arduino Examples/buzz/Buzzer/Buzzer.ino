
#define BUZZER 9

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  //Usage tone(Buzzer_Pin, Frequency, length)
  tone(BUZZER,1000,100);
  delay(1000);
  tone(BUZZER,1000,100);
  delay(1000);
  
}
