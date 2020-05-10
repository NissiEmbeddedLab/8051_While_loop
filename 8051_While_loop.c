#include<reg51.h>
void main(void)
{
	unsigned int n;
	n=8;												// Initialize n=8
	while(n>=5)									// Check wheather n is greater than or equal to 5
	{
		P1 = 0xAA;								// If n is greater or equal to 5 the value 0xAA is hold on PORT1
		P2 = n;										// The value of n moves th PORT 2
		n--;											// Decrement n by 1
	}
	P1 = 0x55;									// If n becomes 5 it skip to this line then 0x55 is hold on PORT1
}
	