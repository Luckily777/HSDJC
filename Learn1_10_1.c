#include <stdlib.h>
#include <stdio.h>
int check_bit(unsigned int number, unsigned int bit);
int main(void)
{
	unsigned int number, bit;
	printf("input a number and a bit position(q to quit):");
	while (scanf("%d%d", &number, &bit) == 2)
	{
		printf("bit %d of %d is %d\n", bit, number, check_bit(number, bit));
		printf("input a number(q to quit):");
	}
	printf("quit\n");
	return 0;
}
int check_bit(unsigned int number, unsigned int bit)
{
	return (number >> bit) & 1;
}