#pragma once

#include "esphome.h"
#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/uart/uart.h"

class EmptyUARTComponent : public sensor::Sensor, public PollingComponent, public uart::UARTDevice {
  public:
    EmptyUARTComponent(UARTComponent *parent) : UARTDevice(parent){}
    Sensor *distance_sensor = new Sensor();
    void setup() override;
    void update() override;
    void dump_config() override;
};

