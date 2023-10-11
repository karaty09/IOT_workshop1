int x = 0;
float y_sin = 0.0;
float y_cos = 1.0; // Start with a cosine wave at phase 0
void setup() {
  Serial.begin(9600);
}

void loop() {
  x = x + 1;
  y_sin = 0.5 * sin(x * 0.1) + 0.5; // Adjust the frequency with the multiplication factor
  y_cos = 0.5 * cos(x * 0.1) + 0.5; // Adjust the frequency with the same multiplication factor
  Serial.printf("%f %f\n",y_sin, y_cos);
  delay(10);
}
