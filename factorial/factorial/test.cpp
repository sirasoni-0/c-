#include<stdio.h>

int main()
{
	int a = 0;
	int result = 1;


	printf("���丮���� ���� ���ڸ� �Է����ּ���:\n");

	while (a <= 0)
	{
		scanf_s("%d", &a);
		if (a < 0)
		{
			printf("�߸��� �� �Է��Դϴ�.\n");
		}
		else if (a == 0)
		{
			printf("1");
			break;
		}
		else
		{
			for (; a >= 2; --a)
			{
				result *= a;
			}
			printf("%d", result);
		}

	}
	

	return 0;
}