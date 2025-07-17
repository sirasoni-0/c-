#include<stdio.h>

int main()
{
	int a = 0;
	int result = 1;


	printf("팩토리얼을 구할 숫자를 입력해주세요:\n");

	while (a <= 0)
	{
		scanf_s("%d", &a);
		if (a < 0)
		{
			printf("잘못된 수 입력입니다.\n");
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