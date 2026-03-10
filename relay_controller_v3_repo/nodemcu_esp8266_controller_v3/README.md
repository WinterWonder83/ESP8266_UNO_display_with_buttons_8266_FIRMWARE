# NodeMCU ESP8266 controller v3

Håndterer:
- webserver med dashboard
- MQTT kommando/status
- LittleFS-lagring
- samhandling med Arduino UNO via SoftwareSerial

Pinner:
- D1 -> Relé IN1
- D2 -> Relé IN2
- D5 -> Relé IN3
- D6 -> Relé IN4
- D7 RX <- UNO D3 TX via spenningsdeler
- D0 TX -> UNO D2 RX
