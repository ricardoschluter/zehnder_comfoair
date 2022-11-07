#pragma once

namespace esphome {
    namespace zehnder_comfoair{
        class zehnder_comfoair::ZehnderProtocolClass
        {

        }
        class zehnder_comfoair::ComfoAir: public PollingComponent
        {
            public:
              ComfoAir() : PollingComponent(10000){}
              void setup() override{}
              void update() override{}
        }
    }
}