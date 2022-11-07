#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

using namespace esphome::uart;

namespace esphome {

class Comfoair : public UARTDevice, public Component {
 public:
  Comfoair(UARTComponent *parent) : UARTDevice(parent) {}
  void setup() override;
  void loop() override;
  void dump_config() override;
};

}  // namespace esphome