#include "esphome/core/log.h"
#include "zehnder_comfoair.h"


static const char *TAG = "empty_uart_component.component";

void EmptyUARTComponent::setup() {

}

void EmptyUARTComponent::loop() {
    ESP_LOGD(TAG,"Logging stuffe");
}

void EmptyUARTComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty UART component");
}