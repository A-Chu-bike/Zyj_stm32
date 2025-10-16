#ifndef __ifndef __LED_H__
#define __LED_H__

#include"gpio.h"
#include <stdint.h>

void LED_On(uint16_t led);
void LED_Off(uint16_t led);

void LED_Toggle(uint16_t led);

void LED_OnAll(uint16_t leds[], uint8_t size);
void LED_OffAll(uint16_t leds[], uint8_t size);










#endif

 