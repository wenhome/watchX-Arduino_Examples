static byte bPin = A11;
static byte battEn = 4;

// Voltage divider resistor values.
float R1 = 10000;
float R2 = 10000;

float vDivider;
float voltage;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  // Voltage divider formula.
  vDivider = (R2 / (R1 + R2));
}

void loop() {
  // put your main code here, to run repeatedly:

  // Read analog voltage value and conver it to voltage in Volts.
  digitalWrite(battEn, HIGH);
  delay(50);
  voltage = analogRead(bPin);
  voltage = (voltage / 1024) * 3.35;
  voltage = voltage / vDivider;
  delay(50);
  digitalWrite(battEn, LOW);

  Serial.print("Battery Voltage: ");
  Serial.print(voltage);
  Serial.println("V");

  delay(1000);
}
