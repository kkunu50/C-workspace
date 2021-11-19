#include <stdio.h>
#include <math.h>

void Get_Standard_deviation(double * ptr1)
{
	int i;
	double standard, standard_deviation;
	double sum = 0;
	for (i = 0; i < 5; i++) {
		sum += ptr1[i];
	}
	standard = sum / 5;
	sum = 0;
	for (i = 0; i < 5; i++){
		sum += pow(ptr1[i] - standard, 2);
	}
	standard_deviation = sqrt(sum/5);
	printf("Standard Deviation = %f", standard_deviation);
}

int main(void) 
{
	double arr[5];
	printf("Enter 5 real number: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &arr[i]);
	}
	Get_Standard_deviation(arr);
	return 0;
}