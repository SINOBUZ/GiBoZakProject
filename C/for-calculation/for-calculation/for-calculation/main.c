#include <stdio.h>
#include <time.h>

int main(void)
{
	int n = 1;
	int count = 0;

	clock_t start, end;
	double result;
	start = clock(); // 수행 시간 측정 시작

	for (int a = 1; a <= 2000; a++)
	{
		// 여기부터 첫줄
		for (int i = 0; i < a - 1; i++)
		{
			n = n + i;
		}
		n = n + a;

		// 여기부터 중간
		// 중간줄 규칙 : 라인 -> i -> k
		for (int i = 0; i < a - 2; i++)
		{
			for (int k = 2; k < a - i; k++)
			{
				n = n + k;
			}
			n = n + i;
			count = count + 1;

			for (int k = 0; k < 2 * i + 1; k++)
			{
				n = n + k;
			}
			n = n + i;

		}

		// 여기부터 마지막줄
		if (a > 1)
		{
			for (int i = 0; i < 2 * a - 1; i++)
			{
				n = n + i;
			}
			n = n + a;
		}
	}

	end = clock(); //시간 측정 끝 
	printf("a = %d\n\n", n);
	result = (double)(end - start); // 결과 출력
	printf("실행 시간 : %.00fms\n", result);
	system("pause");
}