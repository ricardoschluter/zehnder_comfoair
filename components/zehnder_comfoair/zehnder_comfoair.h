#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

namespace esphome {
namespace zehnder_comfoair {

class Comfoair : public UARTDevice, public PollingComponent {
 public:
  Comfoair() :PollingComponent(15000) {}
  void setup() override;
  void update() override;
  void dump_config() override;
};


}  // namespace empty_component
}  // namespace esphome