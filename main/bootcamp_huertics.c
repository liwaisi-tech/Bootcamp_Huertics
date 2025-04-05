#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include <esp_log.h>

static const char *TAG = "bootcamp_huertics";
#define BLINK_GPIO GPIO_NUM_2  // GPIO correspondiente a led de la esp32
void app_main(void)
{
    // Configurar el GPIO como salida
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    while (1) {
        // Encender el LED
        ESP_LOGI(TAG, "Led encendido");
        gpio_set_level(BLINK_GPIO, 1); 
        vTaskDelay(5000 / portTICK_PERIOD_MS);  // Espera 5 segundo
        
        // Apagar el LED
        ESP_LOGI(TAG, "Led apagado");
        gpio_set_level(BLINK_GPIO, 0);
        vTaskDelay(10000 / portTICK_PERIOD_MS);  // Espera 5 segundo

    }
}