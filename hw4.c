#include <stdio.h>

int Binary(int num)
{
	if (num == 1)
	{
		printf("%d", 1);
		return 0;
	}
	else
		Binary(num / 2);
	printf("%d", num % 2);
	return 0;
}

int GetBinary(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	return num;
}

int main(void)
{
	int num;
	num = GetBinary();
	Binary(num);
	return 0;
}