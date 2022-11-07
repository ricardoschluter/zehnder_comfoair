#pragma once

#include <string>
#include "esphome.h"
#include "esphome/core/log.h"
#include "zehnder_comfoair.h"

namespace esphome {
    namespace zehnder_comfoair{
        class zehnder_comfoair::ZehnderProtocolClass
        {

        }
        class zehnder_comfoair::ComfoAir: public PollingComponent, public Sensor
        {
            public:
              ComfoAir() : PollingComponent(10000){}
              void setup() override{}
              void update() override{
                publish_state(42.0);
                ESP_LOGD("custom","Logging stuff");
              }
        }
    }
}