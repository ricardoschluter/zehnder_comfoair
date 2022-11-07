#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

class EmptyUARTComponent : public UARTDevice, public Component {
  public:
    EmptyUARTComponent(UARTComponent *parent) : UARTDevice(parent) {}
    void setup() override;
    void loop() override;
    void dump_config() override;
};

