#include <stdint.h>
#include "main.h"
#include "gpio.h"

int main( void )
{
	GPIO_InitPin(GPIO_PORTC,GPIO_PIN_13,GPIO_OUTPUT_50MHZ, GPIO_OUT_PUSH_PULL);
	GPIO_SetPin(GPIO_PORTC, GPIO_PIN_13, GPIO_LOW);

return 0;
}