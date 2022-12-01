#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, x, f[100];

	printf("請輸入你要找出幾個數字中最大的(100>=a>1):");
	scanf("%d", &a);

	for (b = 1; b <= a; b++)
	{
		scanf("%d", &f[b]);
	}

	if (a <= 1)
	{
		printf("False\n");
	}
	else
	{
		for (b = 1; b <= a * (a - 1) / 2; b++)
		{
			for (c = 1; c <= a; c++)
			{
				if (f[c] > f[c + 1])
				{
					x = f[c];
					f[c] = f[c + 1];
					f[c + 1] = x;
				}
			}
		}
		printf("最大值為%d\n", f[c]);
	}

	system("pause");
	return 0;
}