#pragma once

#include "esphome.h"
#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

class EmptyUARTComponent : public UARTDevice, public Component {
  public:
    EmptyUARTComponent(UARTComponent *parent) : UARTDevice(parent){}
     Sensor *distance_sensor = new Sensor();
    void setup() override;
    void loop() override;
    void dump_config() override;
};

