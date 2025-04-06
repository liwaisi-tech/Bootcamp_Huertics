#include <stdio.h>
#include "moisture_sensor.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"

static const char *TAG = "Capacitive-sensor";
#define CHANNEL1 ADC_CHANNEL_5 //Pin GPIO33 (D33). Asegurate que sea el pin que uses en la conexión fisica.
void app_main(void)
{
    int humedad = 0;
    moisture_sensor_config_t cfg = SENSOR_DEFAULT_CONFIG;
    cfg.channel = CHANNEL1;
    cfg.sensor_type = TYPE_CAP;
    moisture_sensor_init(&cfg); 
    
}
