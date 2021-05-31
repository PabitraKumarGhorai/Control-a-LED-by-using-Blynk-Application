#include <Blynk.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "3vunDQNBcRo2jZMVr9MOv5pSJV7-vOKF";

char ssid[] = "Dlink";
char pass[] = "Pabitra1999";
int led_pin = D8;

void setup()
{
  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  Serial.print("Connecting.....");

  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print("Waiting to connect WiFi\n");
  }
  Serial.print("WiFi is connected \n");
  Serial.print(WiFi.localIP()); 
  pinMode(led_pin, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();
}
