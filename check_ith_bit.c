#include <stdio.h>

int main()
{
	unsigned char n = 0b00000010;
	short i = 3;

	if((n>>i)&1==1)
		printf("The ith bit %d is 1\n", i);
	else
		printf("The ith bit %d is 0\n", i);

	return 0;
}
