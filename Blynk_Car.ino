#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "" //ใส่ ID ที่ได้จากเว็บไซต์ Blynk
#define BLYNK_TEMPLATE_NAME "" // ใส่ชื่อ TEMPLATE ที่ตั้งไว้
#define BLYNK_AUTH_TOKEN "" //ใส่ TOKEN ที่ได้จากเว็บไซต์ Blynk

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char ssid[] = ""; //ชื่อ Wi-Fi หรือ ฮอตสปอต
char pass[] = ""; //รหัสผ่าน

#define ENA D1
#define IN1 D2
#define IN2 D3
#define IN3 D5
#define IN4 D6
#define ENB D7


void setup() {
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

}

void loop() {
  Blynk.run();

}

BLYNK_WRITE(V1) {
if (param.asInt() == 1){
  analogWrite(ENA , 255);
analogWrite(ENB , 255);
digitalWrite(IN1 , 1);
digitalWrite(IN2 , 0);
digitalWrite(IN3 , 1);
digitalWrite(IN4 , 0);
}

else {
  analogWrite(ENA , 0);
  analogWrite(ENB , 0);
  digitalWrite(IN1 , 0);
  digitalWrite(IN2 , 0);
  digitalWrite(IN3 , 0);
  digitalWrite(IN4 , 0);
}

}

BLYNK_WRITE(V2) {
if (param.asInt() == 1){
  analogWrite(ENA , 255);
analogWrite(ENB , 255);
digitalWrite(IN1 , 0);
digitalWrite(IN2 , 1);
digitalWrite(IN3 , 0);
digitalWrite(IN4 , 1);
}

else {
  analogWrite(ENA , 0);
  analogWrite(ENB , 0);
  digitalWrite(IN1 , 0);
  digitalWrite(IN2 , 0);
  digitalWrite(IN3 , 0);
  digitalWrite(IN4 , 0);
}

}

BLYNK_WRITE(V3) {
if (param.asInt() == 1){
  analogWrite(ENA , 255);
analogWrite(ENB , 255);
digitalWrite(IN1 , 1);
digitalWrite(IN2 , 0);
digitalWrite(IN3 , 0);
digitalWrite(IN4 , 1);
}

else {
  analogWrite(ENA , 0);
  analogWrite(ENB , 0);
  digitalWrite(IN1 , 0);
  digitalWrite(IN2 , 0);
  digitalWrite(IN3 , 0);
  digitalWrite(IN4 , 0);
}

}

BLYNK_WRITE(V4) {
if (param.asInt() == 1){
  analogWrite(ENA , 255);
analogWrite(ENB , 255);
digitalWrite(IN1 , 0);
digitalWrite(IN2 , 1);
digitalWrite(IN3 , 1);
digitalWrite(IN4 , 0);
}

else {
  analogWrite(ENA , 0);
  analogWrite(ENB , 0);
  digitalWrite(IN1 , 0);
  digitalWrite(IN2 , 0);
  digitalWrite(IN3 , 0);
  digitalWrite(IN4 , 0);
}

}
