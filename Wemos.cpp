#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "Your_SSID";
const char* password = "Your_PASSWORD";
const char* server = "http://your-server.com/data";

void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);
    
    Serial.print("Connecting to WiFi");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println(" Connected!");
}

void loop() {
    if (WiFi.status() == WL_CONNECTED) {
        HTTPClient http;
        http.begin(server);
        http.addHeader("Content-Type", "application/json");

        String postData = "{\"temperature\": 25.6, \"humidity\": 60}";
        int httpResponseCode = http.POST(postData);

        Serial.print("HTTP Response Code: ");
        Serial.println(httpResponseCode);

        http.end();
    } else {
        Serial.println("WiFi Disconnected!");
    }
    
    delay(5000); // Send data every 5 seconds
}
