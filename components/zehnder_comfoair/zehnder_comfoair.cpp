#include "esphome/core/log.h"
#include "zehnder_comfoair.h"

namespace esphome {
namespace zehnder_comfoair {

static const char *TAG = "zehnder_comfoair.component";

void Comfoair::setup() {
   LOG_PIN("  TX Pin: ", tx_pin_);
   LOG_PIN("  RX Pin: ", rx_pin_);
}

void Comfoair::update() {
    ESP_LOGD(TAG,"test");
}

void Comfoair::dump_config(){
    ESP_LOGCONFIG(TAG, "Comfoair component");
}


}  
}  