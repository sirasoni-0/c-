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
				printf("%d\n", a);
			}
			printf("%d", result);
		}

	}
	

	return 0;
}

//#include <stdio.h>
//
//// 팩토리얼 함수 정의
//int factorial(int n) int n 팩토리얼 함수 속 n의 자리에 대입된다.
// {
//	int result = 1;
//	for (int i = 1; i <= n; i++) {
//		result *= i;
//	}
//	return result; 호출된 함수 자리에 result 값을 대입한다. 이걸 쓰지 않으면 메모리에 값이 저장되지 않고 삭제되어 쓰레기 값이 출력될 수 있다.
//}
//
//int main() 
// {
//	int num = 8;
//	printf("%d! = %d\n", num, factorial(num));
//	return 0;
//  } 