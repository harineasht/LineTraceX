#define S1 A0
#define S2 A1
#define S3 A2
#define S4 A3
#define S5 A4

int threshold = 500;   // Adjust based on your sensor

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Read analog values
  int a1 = analogRead(S1);
  int a2 = analogRead(S2);
  int a3 = analogRead(S3);
  int a4 = analogRead(S4);
  int a5 = analogRead(S5);

  // Convert to digital (change < or > if reversed)
  int d1 = (a1 < threshold) ? 0 : 1;
  int d2 = (a2 < threshold) ? 0 : 1;
  int d3 = (a3 < threshold) ? 0 : 1;
  int d4 = (a4 < threshold) ? 0 : 1;
  int d5 = (a5 < threshold) ? 0 : 1;

  // Print analog values
  Serial.print("Analog: ");
  Serial.print(a1); Serial.print(" ");
  Serial.print(a2); Serial.print(" ");
  Serial.print(a3); Serial.print(" ");
  Serial.print(a4); Serial.print(" ");
  Serial.print(a5); Serial.print("   ");

  // Print digital values
  Serial.print("Digital: ");
  Serial.print(d1);
  Serial.print(d2);
  Serial.print(d3);
  Serial.print(d4);
  Serial.println(d5);

  delay(200);
}