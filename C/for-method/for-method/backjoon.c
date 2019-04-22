#include <stdio.h>

int main(void)
{
	for (int a = 1; a <= 100; a++)
	{
		// 여기부터 첫줄
		for (int i = 0; i < a - 1; i++)
		{
			printf(" ");
		}
		printf("*\n");

		// 여기부터 중간
		// 중간줄 규칙 : 라인 -> i -> k
		for (int i = 0; i < a - 2; i++)
		{
			for (int k = 2; k < a - i; k++)
			{
				printf(" ");
			}
			printf("*");

			for (int k = 0; k < 2 * i + 1; k++)
			{
				printf(" ");
			}
			printf("*\n");

		}

		// 여기부터 마지막줄
		if (a > 1)
		{
			for (int i = 0; i < 2 * a - 1; i++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("a = %d\n\n", a);
	}
}