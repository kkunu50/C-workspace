#include <stdio.h>

typedef struct cities
{
	char Name[20];
	char Country[20];
	int Population;
}Cities;

int main(Void)
{
	Cities arr[3];
	int i;
	printf("input three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("name> "); scanf("%s", arr[i].Name, sizeof(arr[i].Name));
		printf("Country> "); scanf("%s", arr[i].Country, sizeof(arr[i].Country));
		printf("Population> "); scanf(" %d", &arr[i].Population);
	}
	printf("printing the three cities \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people", i+1, arr[i].Name, arr[i].Country, arr[i].Population);
		printf("\n");
	}
	return 0;
}