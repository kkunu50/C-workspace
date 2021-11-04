#include <stdio.h>

int main(void) 
{
	int arr[5];
	printf("5개의 정수를 입력하세요: ");
	for (int i = 0; i <= 4; i++) {
		scanf("%d", &arr[i]);
	}

	printf("홀수 출력: ");
	for (int i = 0; i <= 4; i++) {
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n짝수 출력: ");
	for (int i = 0; i <= 4; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}