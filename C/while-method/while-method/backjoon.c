#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start, end; 
	double result;
	start = clock(); // ���� �ð� ���� ����

	int a = 1;
	//for (int a = 1; a <= 100; a++)
	while (a <= 100)
	{
		// ������� ù��
		//for (int i = 0; i < a - 1; i++)
		int i = 0;
		while (i < a - 1)
		{
			printf(" ");
			i++;
		}
		printf("*\n");

		// ������� �߰�
		// �߰��� ��Ģ : ���� -> i -> k
		i = 0;
		while (i < a - 2)
		//for (int i = 0; i < a - 2; i++)
		{
			int k = 2;
			//for (int k = 2; k < a - i; k++)
			while (k < a - i)
			{
				printf(" ");
				k++;
			}
			printf("*");
			k = 0;
			//for (int k = 0; k < 2 * i + 1; k++)
			while(k < 2 * i + 1)
			{
				printf(" ");
				k++;
			}
			printf("*\n");
			i++;
		}

		// ������� ��������
		if (a > 1)
		{
			i = 0;
			//for (int i = 0; i < 2 * a - 1; i++)
			while (i < 2 * a - 1)
			{
				printf("*");
				i++;
			}
			printf("\n");
		}
		printf("a = %d\n\n", a);
		a++;
	}
	
	end = clock(); //�ð� ���� �� 
	result = (double)(end - start); // ��� ���
    printf("���� �ð� : %.00fms", result); 
	return 0;
}