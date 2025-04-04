#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 *             need to flip to get from one number to another.
 * @n: first number.
 * @m: second number.
 * Return: number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
unsigned int bits = 0;
unsigned long int diff_bits;

diff_bits = n ^ m;

do {
bits += (diff_bits & 1);
diff_bits >>= 1;
} while (diff_bits > 0);
return (bits);
}
