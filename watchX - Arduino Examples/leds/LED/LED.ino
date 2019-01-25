#define LEDL 13
#define LEDR 6

void setup() {
  // put your setup code here, to run once:

  pinMode(LEDL, OUTPUT);
  pinMode(LEDR, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LEDL, HIGH);
  digitalWrite(LEDR, HIGH);
  
  delay(500); 
  
  digitalWrite(LEDL, LOW);
  digitalWrite(LEDR, LOW);

  delay(500);
}
