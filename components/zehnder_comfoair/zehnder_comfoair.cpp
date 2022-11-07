#pragma once

#include <string>
#include "esphome.h"
#include "esphome/core/log.h"
#include "zehnder_comfoair.h"

namespace esphome {
    namespace zehnder_comfoair{
        void ComfoAir::setup() override{}
        void ComfoAir::update() override{
           publish_state(42.0);
           ESP_LOGD("custom","Logging stuff");
          }
        }
    }
}