void setup() {
  Serial.begin(115200);
pinMode(PA8, PWM);
timer.setPrescaleFactor(1);
timer.setOverflow(1800);  

}

void loop() {
 pwmWrite(PA8,1600);

}
