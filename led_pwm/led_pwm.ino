void setup() {
}
void loop() {
  int a = 0;
  for (a = 0; a <= 255; a++)    //点灯
  {
    analogWrite(11, a);
    delay(5);
  }
  for (a = 255; a >= 0; a--)    //消灯
  {
    analogWrite(11, a);
    delay(5);
  }
  delay(500);
}
