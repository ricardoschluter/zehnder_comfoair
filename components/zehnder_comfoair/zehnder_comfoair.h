#pragma once

#include "esphome.h"

        class ZehnderProtocolClass
        {

        }
        class ComfoAir: public PollingComponent, public Sensor
        {
            public:
              ComfoAir() : PollingComponent(10000){}
              void setup() override{}
              void update() override{}
        }
    }
}