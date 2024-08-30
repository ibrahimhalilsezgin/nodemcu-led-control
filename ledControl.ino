#include <ESP8266WiFi.h>

WiFiServer server(80);

void setup()
{
int pins[] = {D0, D1, D2, D3, D5, D6, D7, D8};

for(int i = 0; i <= 8; i++) {
  pinMode(pins[i], OUTPUT);
}

  Serial.begin(9600);

  WiFi.disconnect();
  delay(3000);
  WiFi.begin("ssid", "password");  //Edit and add your WIFI info

  Serial.println("Connecting to Wifi");
  while (!(WiFi.status() == WL_CONNECTED)) {
    delay(400);
    Serial.println("...");
  }

  Serial.println("I'm Connected");
  Serial.println((WiFi.localIP().toString()));

  server.begin();
}

void loop()
{
  WiFiClient client = server.available();
  if (!client) {
    return;
  }

  while (!client.available()) {
    delay(1);
  }

  String request = client.readStringUntil('\r');
  request.remove(0, 5);
  request.remove(request.length() - 9, 9);



if (request == "ON0") {
    digitalWrite(D0, HIGH);
    Serial.println("D0 is High");
}

if (request == "OFF0") {
    Serial.println("D0 is Low");
    digitalWrite(D0, LOW);
}

if (request == "ON1") {
    digitalWrite(D1, HIGH);
    Serial.println("D1 is High");
}

if (request == "OFF1") {
    Serial.println("D1 is Low");
    digitalWrite(D1, LOW);
}

if (request == "ON2") {
    digitalWrite(D2, HIGH);
    Serial.println("D2 is High");
}

if (request == "OFF2") {
    Serial.println("D2 is Low");
    digitalWrite(D2, LOW);
}

if (request == "ON3") {
    digitalWrite(D3, HIGH);
    Serial.println("D3 is High");
}

if (request == "OFF3") {
    Serial.println("D3 is Low");
    digitalWrite(D3, LOW);
}

if (request == "ON4") {
    digitalWrite(D4, HIGH);
    Serial.println("D4 is High");
}

if (request == "OFF4") {
    Serial.println("D4 is Low");
    digitalWrite(D4, LOW);
}

if (request == "ON5") {
    digitalWrite(D5, HIGH);
    Serial.println("D5 is High");
}

if (request == "OFF5") {
    Serial.println("D5 is Low");
    digitalWrite(D5, LOW);
}

if (request == "ON6") {
    digitalWrite(D6, HIGH);
    Serial.println("D6 is High");
}

if (request == "OFF6") {
    Serial.println("D6 is Low");
    digitalWrite(D6, LOW);
}

if (request == "ON7") {
    digitalWrite(D7, HIGH);
    Serial.println("D7 is High");
}

if (request == "OFF7") {
    Serial.println("D7 is Low");
    digitalWrite(D7, LOW);
}

if (request == "ON8") {
    digitalWrite(D8, HIGH);
    Serial.println("D8 is High");
}

if (request == "OFF8") {
    Serial.println("D8 is Low");
    digitalWrite(D8, LOW);
}

}
