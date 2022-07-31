#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LOG_LOCAL_LEVEL ESP_LOG_VERBOSE
#include "esp_log.h"
#define LOG_TAG         "MAIN"

extern "C" void app_main(void) {
  ESP_LOGI(LOG_TAG, "Built on: %s", __DATE__);

  while (true) {
    ESP_LOGI(LOG_TAG, "Hello, World!");
    vTaskDelay(pdMS_TO_TICKS(1000));
  }
}