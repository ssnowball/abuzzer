#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/binary_info.h"

const uint PIN_BUZ = 15;

void main(void) {
	bi_decl(bi_program_description("This is a program to buz a buzzer"));
	
	stdio_init_all;
	
	gpio_init(PIN_BUZ);
	gpio_set_dir(PIN_BUZ, GPIO_OUT);
	
	while(1) {
		gpio_put(PIN_BUZ, 0);
		sleep_ms(1000);
		gpio_put(PIN_BUZ, 1);
		sleep_ms(2000);
	}
}

