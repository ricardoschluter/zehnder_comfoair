#pragma once

#include <string>
#include "zehnder_comfoair.h"

namespace esphome {
    namespace zehnder_comfoair{
        class ZehnderProtocolClass
        {

        }
        class ComfoAir: public PollingComponent
        {
            public:
              ComfoAir() : PollingComponent(10000){}
              void setup() override{}
              void update() override{}
        }
    }
}