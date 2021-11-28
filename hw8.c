#include <stdio.h>
#include <string.h>

void convCase()
{
	char str[30];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	int i;
	const int diff = 'a' - 'A';
	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
		else if (str[i] < 'A')
			str[i];
		else
			return -1;
	}
	printf("Output> ");
	fputs(str, stdout);
}

int main(void)
{
	convCase();
	return 0;
}