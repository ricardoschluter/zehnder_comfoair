#include "esphome/core/log.h"
#include "zehnder_comfoair.h"

namespace esphome {
namespace zehnder_comfoair {

static const char *TAG = "zehnder_comfoair.component";

void Comfoair::setup() {
ESP_LOGCONFIG(TAG, "Setting up UART...");
   // Use Arduino HardwareSerial UARTs if all used pins match the ones
   // preconfigured by the platform. For example if RX disabled but TX pin
   // is 1 we still want to use Serial.
   bool is_default_tx, is_default_rx;
 #ifdef CONFIG_IDF_TARGET_ESP32C3
   is_default_tx = tx_pin_ == nullptr || tx_pin_->get_pin() == 21;
   is_default_rx = rx_pin_ == nullptr || rx_pin_->get_pin() == 20;
 #else
   is_default_tx = tx_pin_ == nullptr || tx_pin_->get_pin() == 1;
   is_default_rx = rx_pin_ == nullptr || rx_pin_->get_pin() == 3;
 #endif
   if (is_default_tx && is_default_rx) {
     this->hw_serial_ = &Serial;
   } else {
     static uint8_t next_uart_num = 1;
     this->hw_serial_ = new HardwareSerial(next_uart_num++);  // NOLINT(cppcoreguidelines-owning-memory)
   }
   int8_t tx = this->tx_pin_ != nullptr ? this->tx_pin_->get_pin() : -1;
   int8_t rx = this->rx_pin_ != nullptr ? this->rx_pin_->get_pin() : -1;
   bool invert = false;
   if (tx_pin_ != nullptr && tx_pin_->is_inverted())
     invert = true;
   if (rx_pin_ != nullptr && rx_pin_->is_inverted())
     invert = true;
   this->hw_serial_->begin(this->baud_rate_, get_config(), rx, tx, invert);
   this->hw_serial_->setRxBufferSize(this->rx_buffer_size_);
}

void Comfoair::update() {
    ESP_LOGD(TAG,"test");
}

void Comfoair::dump_config(){
    ESP_LOGCONFIG(TAG, "Comfoair component");
}


}  
}  