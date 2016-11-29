void setup() {
  // put your setup code here, to run once:
  
 Serial.begin(9600);
 /*float adc= analogRead(A0);
 float VR2= adc*5.0/1023.0;
 Serial.println("Nilai VR2: ");
 Serial.println(VR2);
 float VR1=5.0-VR2;
 Serial.println("Nilai VR1: ");
 Serial.println(VR1);
 float IR2 = (5.0-VR2)/100.0;
 Serial.println("Nilai IR2: ");
 Serial.println(IR2);
 float R2= VR2/IR2;
 Serial.println("Nilai R2: ");
 Serial.println(R2);
 /*float R2= VR2/((5.0-VR2)/100.0);
 Serial.println("Nilai R2: ");
 Serial.println(R2);*/

}

void loop() {
 Serial.println("===============Kalkulator Ohmmeter===============");
 float adc= analogRead(A0);
 float VR2= adc*5.0/1023.0;
 float VR1=5.0-VR2;
 Serial.println("Nilai VR1: ");
 Serial.println(VR1);
 Serial.println("Nilai VR2: ");
 Serial.println(VR2);
 float I = (5.0-VR2)/100.0;
 Serial.println("Nilai I: ");
 Serial.println(I);
 float R2= VR2/I;
 Serial.println("Nilai R2: ");
 Serial.println(R2);
  delay(10000);

}
