#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

using namespace esphome::uart;

namespace esphome {
namespace zehnder_comfoair {

class Comfoair : public UARTDevice, public Component {
 public:
  Comfoair(UARTComponent *parent) : UARTDevice(parent) {}
  void setup() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace empty_component
}  // namespace esphome