#include <stdio.h>
#include <time.h>

int main(void)
{
	int n = 1;
	int count = 0;

	clock_t start, end;
	double result;
	start = clock(); // ���� �ð� ���� ����

	for (int a = 1; a <= 2000; a++)
	{
		// ������� ù��
		for (int i = 0; i < a - 1; i++)
		{
			n = n + i;
		}
		n = n + a;

		// ������� �߰�
		// �߰��� ��Ģ : ���� -> i -> k
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

		// ������� ��������
		if (a > 1)
		{
			for (int i = 0; i < 2 * a - 1; i++)
			{
				n = n + i;
			}
			n = n + a;
		}
	}

	end = clock(); //�ð� ���� �� 
	printf("a = %d\n\n", n);
	result = (double)(end - start); // ��� ���
	printf("���� �ð� : %.00fms\n", result);
	system("pause");
}