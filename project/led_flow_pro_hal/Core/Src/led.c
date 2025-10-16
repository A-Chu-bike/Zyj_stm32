#include"led.h"
#include <stm32f103xe.h>

void LED_On(uint16_t led)
{
    HAL_GPIO_WritePin(GPIOA, led, GPIO_PIN_RESET);
}
void LED_Off(uint16_t led)
{
    HAL_GPIO_WritePin(GPIOA, led, GPIO_PIN_SET);
}

void LED_Toggle(uint16_t led)
{
    HAL_GPIO_TogglePin(GPIOA, led);
}

void LED_OnAll(uint16_t leds[], uint8_t size)
{
    for(uint8_t i = 0; i < size; i++)
    {
        HAL_GPIO_WritePin(GPIOA, leds[i], GPIO_PIN_RESET);
    }
}
void LED_OffAll(uint16_t leds[], uint8_t size)
{
    for(uint8_t i = 0; i < size; i++)
    {
        HAL_GPIO_WritePin(GPIOA, leds[i], GPIO_PIN_SET);
    }
}
