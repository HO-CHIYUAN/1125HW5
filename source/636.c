#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char f[100];
	int a, b;
	
	printf("輸入字串的字數:");
	scanf("%d", &a);
	printf("輸入字串:");

	for (b = 1; b <= a+1; b++)
	{
		scanf("%c", &f[b]);
	}

	for (b = a+1; b >= 1; b--)
	{
		printf("%c", f[b]);
	}

	system("pause");
	return 0;
}