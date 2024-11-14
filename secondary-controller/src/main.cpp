#include <Arduino.h>
#include "FreeRTOS.h"
#include "task.h"
#include "config.h"
#include "TaskManager.h"

void setup() {
    Serial.begin(115200);
    // Initialize tasks here
}

void loop() {
    // Empty loop when using FreeRTOS
    vTaskDelay(portMAX_DELAY);
}
