#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

namespace esphome {
namespace zehnder_comfoair {

class Comfoair : public uart::UARTDevice, public Component {
 public:
  Comfoair(UARTComponent *parent) : UARTDevice(parent) {}
  void setup() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace empty_component
}  // namespace esphome