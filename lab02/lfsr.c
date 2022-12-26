#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"
#include "bit_ops.c"


void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
	//first, calculate the new first bit. 
	int first = get_bit((unsigned) *reg, 0);
	first = get_bit((unsigned) *reg, 2) ^ first;
	first = get_bit((unsigned) *reg, 3) ^ first;
	first = get_bit((unsigned) *reg, 5) ^ first;
	// then shift and set first to what we've calculated
	*reg = *reg>>1;
	set_bit((unsigned *) reg, 15, first);	
}

