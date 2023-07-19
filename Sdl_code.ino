#define BLYNK_TEMPLATE_ID "TMPLwWIgljVk"
#define BLYNK_DEVICE_NAME "Quickstart Device"
#define BLYNK_AUTH_TOKEN "fGuRZTn6RrI-7fNGVBxJsAOEHWujD-F3"
// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = BLYNK_AUTH_TOKEN;
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Amits Laptop";
char pass[] = "Amit@123";
const int relayPin = 5;
void setup()
{
// put your setup code here, to run once:
// Debug console Serial.begin(9600);
pinMode(relayPin,OUTPUT);
digitalWrite(relayPin,HIGH);
Blynk.begin(auth, ssid, pass);
// You can also specify server:
//Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
//Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);
}
void loop()
{
Blynk.run();
}
