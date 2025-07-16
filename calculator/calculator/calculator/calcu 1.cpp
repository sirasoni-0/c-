//계산기 만들기
//기능: 사칙연산, 계산이 끝나고 또 할거냐고 물어본뒤 계속 하던지 아니면 종료
//목표: printf와 scanf_s 복습, 자료형과 반복문 switch문 복습.



#include<stdio.h>
//계산기 사칙연산 함수 구연
int addition (int left, int right)
{
	return left + right;
}

int subtraction (int left, int right)
{
	return left - right;
}

int multiplication (int left, int right)
{
	return left * right;
}

int division (int left, int right)
{
	return left / right;
}












int main()
{
	//retry는 종류를 위한 변수
	char retry = 'y';
	//계산기 첫 실행
	printf("----------------------------\nl");
	printf("     계산기입니다!         l\n");
	printf("----------------------------\n");
	//루프 시작
	while (retry == 'y')
	{
		int input_num1 = 0;
		int input_num2 = 0;
		int operators = 0;
		int result = 0;
		//숫자 입력 받기
		printf("계산할 숫자 2개를 넣어주세요!:\n");
		scanf_s("%d %d", &input_num1, &input_num2);
		
		//연산방법 정하기
		printf("1(더하기), 2(빼기), 3(곱하기), 4(나누기) 선택해주세요.\n");
		scanf_s("%d", &operators);
		//연산 실행
		switch (operators)
		{
		case(1):
			
			result = addition(input_num1, input_num2);
			printf("출력값은 %d입니다!", result);
			break;
		case(2):
			
			result = subtraction(input_num1, input_num2);
			printf("출력값은 %d입니다!", result);
			break;
		case(3):
			
			result = multiplication(input_num1, input_num2);
			printf("출력값은 %d입니다!", result);
			break;
		case(4):
		
			result = division(input_num1, input_num2);
			printf("출력값은 %d입니다!", result);
			break;
		default:
			printf("올바른 연산자를 골라주세요");
		}
		printf("계산을 더 하시겠습니까?(y/n)\n");
		scanf_s(" %c", &retry, 1);
		


	}
	return 0;
}