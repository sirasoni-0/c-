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
				printf("%d\n", a);
			}
			printf("%d", result);
		}

	}
	

	return 0;
}

//#include <stdio.h>
//
//// ���丮�� �Լ� ����
//int factorial(int n) int n ���丮�� �Լ� �� n�� �ڸ��� ���Եȴ�.
// {
//	int result = 1;
//	for (int i = 1; i <= n; i++) {
//		result *= i;
//	}
//	return result; ȣ��� �Լ� �ڸ��� result ���� �����Ѵ�. �̰� ���� ������ �޸𸮿� ���� ������� �ʰ� �����Ǿ� ������ ���� ��µ� �� �ִ�.
//}
//
//int main() 
// {
//	int num = 8;
//	printf("%d! = %d\n", num, factorial(num));
//	return 0;
//  } 