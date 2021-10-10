#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	num3 = 0;
	printf("Please enter a number: ");
	scanf("%d", &num1);

	for(num2 = 2; num1 >= num2; num2++)
	{
		if (num1 % num2 == 0)
			num3++;
	}
	if(num3 == 1)
		printf("It is a prime number");
	else
		printf("it is not a prime number");
	return 0;
}