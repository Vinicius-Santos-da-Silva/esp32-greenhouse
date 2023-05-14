#include <MQTT.h>
#include <MQTTClient.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include <string.h>
#include "infra/aws_connect.h"
#include "infra/aws_publish_message.h"
#include "infra/environment.h"
#include "infra/certs.h"
#include "infra/wifi.h"
#include "application/manage_water_pump_state.h"
#include "application/soil_collector.h"
#include <WiFiClientSecure.h>

HTTPClient http;
WiFiClientSecure net = WiFiClientSecure();
MQTTClient client = MQTTClient(512);


void setup() {
    pinMode(pinSensorUmiSoloA, INPUT);
    pinMode(rele, OUTPUT);
    pinMode(releCooler, OUTPUT);
    Serial.begin(9600);
    setupWifi();
    connectToAWS(&client, &net);
    consumerCommand();
}

void loop() {
    Serial.println("*** Start Looping***");
    soilCollector(&client);
    client.loop();
    delay(4000);
}

void consumerCommand() {
  Serial.println("\n** Start consumers...\n");
  client.subscribe(AWS_IOT_SUBSCRIBE_TOPIC_WATER_PUMP);
  client.onMessage(messageHandlerWaterPump);
}

void messageHandlerWaterPump(String &topic, String &payload) {
    Serial.println("incoming: " + topic + " - " + payload);

    if (topic == AWS_IOT_SUBSCRIBE_TOPIC_WATER_PUMP) {
        manageWaterPumpState(payload);
        return;
    }

    Serial.println("Não existe handler para o topico:" + topic);
}

