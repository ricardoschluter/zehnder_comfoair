#include "esphome/core/log.h"
#include "zehnder_comfoair.h"

namespace esphome {
namespace zehnder_comfoair {

static const char *TAG = "zehnder_comfoair.component";

void Comfoair::setup() {

}

void Comfoair::loop() {
    ESP_LOGD(TAG,"test");
}

void Comfoair::dump_config(){
    ESP_LOGCONFIG(TAG, "Comfoair component");
}


}  
}  