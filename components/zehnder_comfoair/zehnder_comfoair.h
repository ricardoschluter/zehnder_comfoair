#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

using namespace esphome.uart;

namespace esphome {
namespace empty_uart_component {

class EmptyUARTComponent : public UARTDevice, public Component {
  public:
    EmptyUARTComponent(UARTComponent *parent) : UARTDevice(parent) {}
    void setup() override;
    void loop() override;
    void dump_config() override;
};


}  // namespace empty_uart_component
}  // namespace esphome