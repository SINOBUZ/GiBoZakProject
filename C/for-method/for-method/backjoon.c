#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start, end;
	double result;
	start = clock(); // ���� �ð� ���� ����

	for (int a = 1; a <= 100; a++)
	{
		// ������� ù��
		for (int i = 0; i < a - 1; i++)
		{
			printf(" ");
		}
		printf("*\n");

		// ������� �߰�
		// �߰��� ��Ģ : ���� -> i -> k
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

		// ������� ��������
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

	end = clock(); //�ð� ���� �� 
	result = (double)(end - start); // ��� ���
	printf("���� �ð� : %.00fms\n", result);
	system("pause");
}