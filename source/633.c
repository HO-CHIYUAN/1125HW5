#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

#define recursive(x,y) {int t; t = x; x = y; y = t;} 
void quickSort(int[], int, int);
int binarySearch(int[], int);

int main(void)
{
	srand(time(NULL));

	int number[10] = { 0 };

	int i;
	for (i = 0; i < 10; i++) {
		number[i] = rand() % 100;
	}

	quickSort(number, 0, 9);

	printf("數列：");
	for (i = 0; i < 10; i++)
		printf("%d ", number[i]);

	int find;
	printf("\n請輸入要尋找的數字：");
	scanf("%d", &find);

	if ((i = binarySearch(number, find)) >= 0)
		printf("在索引%d找到數字", i);
	else
		printf("\n找不到");

	printf("\n");

	return 0;
}

int binarySearch(int number[], int find)
{
	int low = 0;
	int upper = 9;

	while (low <= upper) {
		int mid = (low + upper) / 2;
		if (number[mid] < find)
			low = mid + 1;
		else if (number[mid] > find)
			upper = mid - 1;
		else
			return mid;
	}
	return -1;
}

void quickSort(int number[], int left, int right)
{
	if (left < right) {
		int s = number[(left + right) / 2];
		int i = left - 1;
		int j = right + 1;

		while (1) {
			while (number[++i] < s);
			while (number[--j] > s);
			if (i >= j)
				break;
			recursive(number[i], number[j]);
		}

		quickSort(number, left, i - 1);
		quickSort(number, j + 1, right);
	}
}