#include <stdio.h>

int main(void)
{
	double km;
	double mile;
	printf("please enter kilometers: ");
	scanf("%lf", &km);
	mile = km * 0.621371;
	printf("%.1f km is equal to %.1f miles.", km, mile);
}