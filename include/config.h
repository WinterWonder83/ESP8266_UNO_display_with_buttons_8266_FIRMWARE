#pragma once
#define WIFI_SSID "SETT_MEGET_WIFI"
#define WIFI_PASSWORD "SETT_MEGET_PASSORD"
#define MQTT_HOST "192.168.1.10"
#define MQTT_PORT 1883
#define MQTT_USER ""
#define MQTT_PASSWORD ""
#define MQTT_CLIENT_ID "relay-panel-esp8266"
#define MQTT_BASE_TOPIC "smarthus/relepanel"
#define RELAY_ACTIVE_LOW true
#define RELAY_COUNT 4
#define PANEL_RX_PIN D7
#define PANEL_TX_PIN D0
#define PANEL_BAUD 115200
static const uint8_t RELAY_PINS[RELAY_COUNT] = {D1, D2, D5, D6};
#define HTTP_PORT 80
