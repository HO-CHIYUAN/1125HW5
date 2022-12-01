#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a, x, y;
	int f[11] = { 0 };
	
	srand(time(NULL));

	for (a = 1; a <= 36000; a++)
	{
		x = 1 + rand() % 6;
		y = 1 + rand() % 6;

		f[x + y - 2]++;
	}

	for (a = 2; a <= 12; a++)
	{
		printf("%2d %d\n",a, f[a-2]);
	}

	system("pause");
	return 0;
}