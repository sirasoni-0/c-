//#define HUNGRY 1
//#define THIRSTY 2
//
//
//
//
//
////함수 만들기
//int add(int left, int right)
//{
//	return left + right;
//}
//위 함수에서 내가 result = addition(input_num1, input_num2); 라는 코드를 쓰면 input_num1, input_num2)의 값이
// 레프트와 라이트에 들어갔다가 나온다. left right로 설정한 건 가독성을 위한 것이다.
//
//
//// 전역 변수
//int global = 0;
//
//
//
//
//
//int main()
//{
//	//2025.7.8
//	//자료형 (크기단위 byte=(8bit))
//	//정수형: char(1), short(2), int(4), long(4), longlong(8)
//	//실수형: float(4), double(8), long double(16)
//	//unsigned는 양의 정수만 표현한다. 
//	//MSB는 most siginificnat bit 라는 의미로 부호를 결정함. 1은 음수 0은 양수
//	//컴퓨터는 음수의 표현을 합이 0이 되는 수로 한다.
//	//2의 보수법을 이용하면 sighed에서 unsighed의 값으로 음수를 표현할 수 있다.
//
//	int i = 0;
//	//1byte로 양수만 표현 256가지 0~255
//	unsigned char c = 0;
//	c = 0;
//	c = 255;
//
//	c = -1;
//	//1byte로 정수 표현 256가지 -128~0~127
//	char c1 = 0;
//
//	c1 = 129;
//	//2025.7.9
//	//컴퓨터에서 정수와 실수는 표현 방식이 다르다.(실수는 약간의 차이 속에도 무수히 많은 수가 있어서 비트가 부족함.)
//	//실수는 부동 소수점 방식을 사용하여 표현하는데 double을 사용하면 정밀도가 올라가서 근사치를 구할 수 있다.
//	// 되도록 같은 자료형끼리 계산을 하지만, 의도된 거라면 표시한다.
//	//ex
//	double d = 10.2415f + (float)20;
//
//	//산술연산자 +,-,*,/,%(모듈러스 연산자, 정수만 사용 가능. 나머지만 출력)
//	int data = 10 % 3;
//
//	data = 10 + 10;
//	//data = data + 20 == data += 20
//	// 실수를 상수로 적을 경우 f를 붙이면 float으로, 안붙이면 double 형이 됨.
//	data = (10.f / 3.f);
//
//
//	//증감 연산자 ++, -- 다음단계로 증가 or 감소
//	// ++a: 전위
//	// a++: 후위(후위로 사용할 경우 모든 연산자보다 순위가 밀린다. 즉시 적용 안되고 다음부터 적용)
//
//	data = 0;
//	c = 10;
//
//	data = c++;
//
//	//2025.7.10
//	// 논리 연산자
//	//!(역), &&(and), ||(or)
//	// bool 자료형은 엄밀히 따지면 정수이지만, 출력은 0이나 1밖에 못한다.
//	// 0은 false를 의미하고 true는 0이외의 모든 값을 이야기한다.
//	// 논리 연산자로는 1과 0밖에 표현할 수 없다. 하지만 이것들을 조합하거나 병렬적으로 사용하면 복잡한 것도 만들 수 있다.
//	int istrue = 100;
//	bool daw = !istrue;
//	bool ox;
//	bool mitin = 4;
//	char bam = mitin;
//
//	ox = 0;
//	bam = 0 && 100;
//	bam = 0 || 100;
//
//	bam = 200;
//	mitin = 0 && bam;
//	// 비교연산자
//	// ==, !=, <, >, <=, >=
//	// 참 거짓으로(1 or 0)으로 결과를 낸다.
//	// =와 ==의 차이
//	// =는 메모리속 값이 변하지만, ==는 값은 그대로고 그 숫자와 비교만 한다.
//
//	// if구문
//	// if에 해당 사항 없으면 else if, 그래도 없으면 else 실행
//	bam = 300;
//	if (bam == 200)
//	{
//		bam = 30;
//	}
//	else if (bam == 300)
//	{
//		bam = 20;
//	}
//
//	else if (bam == 44)
//	{
//		bam = 77;
//	}
//	else
//	{
//		bam = 9;
//	}
//
//	if (bam == true)
//	{
//		bam = false;
//	}
//	else if (bam == false)
//	{
//		bam = true;
//	}
//	else
//	{
//		bam = 26;
//	}
//
//	if (mitin == 0)
//	{
//		bam = 2;
//	}
//	else if (mitin != 0)
//	{
//		bam = 3;
//	}
//
//	if (bam > 1)
//	{
//		bam = 1;
//	}
//
//	// switch 구문
//	// if구문과 비슷하지만 케이스로 나눠서 가독성이 좋음
//	// if구문과 달리 case를 빠져 나오기 위해서는 break; 사용해야함.
//	// if구문과 switch구문 둘다 시작은 아무것도 적지 않지만 구문 속으로 들어가면 if는 세미콜론을 사용하고
//	// case에 콜론을 붙이고 케이스 안에선 세미콜론을 사용한다.
//
//	int itst = 10;
//	switch (itst)
//	{
//	case 5:
//		itst = 6;
//		break;
//	case 10:
//		itst = 12;
//		break;
//	default:
//		break;
//
//
//	}
//
//	int asd = 10;
//	switch (asd)
//	{
//	case 10:
//	case 20:
//	case 30:
//
//		itst = 50;
//
//		break;
//	case 40:
//		break;
//	default:
//
//
//		break;
//	}
//	//논리 연산자에서 우선 순위는 !, and, or 순서이다.
//	if (itst == 30 || itst == 60 && itst == 50)
//	{
//		itst = 123;
//	}
//	else
//	{
//		itst = 321;
//	}
//
//	char arabella = 10;
//
//	switch (arabella)
//	{
//	case 90:
//		break;
//	case 10:
//		arabella = 5;
//		break;
//	default:
//		break;
//
//	}
//
//	
//
//
//	//삼항 연산자
//	int test = 20;
//	
//	test == 20 ? test = 10 : test = 30;
//
//	// 2025.7.11
//	// 오늘은 뭔가 집중이 안돼서 많이 못했다. 그래도 도서관을 온 것에 의의가 있고 비트연산자를 기본적으로는 배워서 다음에 복습하고 더 심화적으로
//	// 나가면 될 것 같다.
//	//비트 연산자
//	// << 비트를 왼쪽으로 한 칸 옮긴다. 기존 값 * 2^n (10진수도 한 칸 옆으로 가면 10이 곱해지는 것을 생각하면 이해가 쉽다.)
//	// >> 비트를 오른쪽으로 한 칸 옮긴다. 기존 값 / 2^n
//	// =를 넣지 않으면 값의 변화가 없는데 그 이유는 계산만 하고 저장되지 않았기 때문이다. 결국 am의 값은 1도 변하지 않는다.
//	unsigned char am = 13;
//	am <<= 2; 
//	am >>= 3;
//
//	//비트 곱(&), 합(|), xor(^), 역(~)
//	//두 수를 비트 단위로 비교하여 연산
//	//곱(&)   둘다 1인 경우 1
//	//합(|)   하나라도 1인경우 1
//	//xor(^)  같으면 0 다르면 1
//	//역(~)   1이면 0, 0이면 1
//
//	unsigned char gar = 1;
//	am = 3;
//	int music = 0;
//	music = am & gar;
//	int k = 1;
//	k += 3;
//	//2025.7.14
//	// #define 은 전처리기로 컴파일러가 최우선적으로 실행한다.
//
//	unsigned int status = 0;
//
//	status |= HUNGRY;
//	status |= THIRSTY;
//	// 상태 확인
//	
//	if (status & THIRSTY)
//	{
//
//	}
//
//	// 특정자리 비트 제거
//		status &= ~THIRSTY;
//
// 
// 
// 
// 
// 
//	// 2025.7.15
//	// 변수의 종류: 
//	// 전역 변수: 괄호 밖에 정의된 변수, 초기화 해야한다, 안하면 0이다.
//	// 지역 변수: 괄호 안에 정의된 변수, 초기화 하지 않으면 랜덤 값이다.
//	// 정적 변수
//	// 외부변수
//	// 변수를 선언 할 때 같은 이름의 함수를 같은 영역 안에서 선언하면 안된다.
//	// 다른 영역에서 동일한 이름의 변수가 선언 될 경우, 함수 내부에 있는 변수를 지칭한다.
//
//
//	// 함수: 기능. 간단한 함수들이 모여서 큰 기능을 한다.
//	// 함수로 모듈을 만들 때에는 파트별로 나눠서 모듈화 할수록 좋다.
//	data = 10;
//	data += add(10, 20);
//
//	int sss;
//
//	return 0;
//}
// 











// 2025.7.15
// 오늘은 변수의 종류와 반복문 구문에 대해서 알아봤다.
// 변수는 전역변수, 지역변수, 정적변수, 외부변수등이 있는데
// 전역변수는 함수 밖에서 선언된 변수, 지역 변수는 내부에서 선언된 변수이다.
// 둘은 이름이 같더라도 동일한 함수에서 작동하는게 아니면 상관없다.

#include <stdio.h>
int add(int left, int right)
{
	return (left + right);
}

int main()
{
	int data = add(2, 3);
	//반복문에는 continue와 break가 있다. continue는 아래 명령을 무시하고 다시 반복자 변경으로 돌아간다.ㅣ
	//break는 반복문을 탈출한다.

	//for 반복문
	//for(반복자 초기화; 반복자 조건 체크; 반복자 변경)
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		printf("output test!\n");
	
	}
	
	int k = 0 % 2;
	//while 반복문
	//for 반복문 보다 더 구체적으로 조건 설정 가능.
	int i = 0;
	while (i < 10)
	{

		printf("output test\n");
		printf("i =%d\n", i);
		++i;

	}



	//2025.7.16.
	//오늘은 printf와 scanf에 대해 배웠다.
	//%d는 서식 지정자(format specifier)라고 한다. %d는 정수를, %f는 실수를, %s는 문자열을 의미한다.
	//
	

	printf("asdaf %d\n", 10);

	for (int i = 0; i < 10; i++)
	{
		printf("output of i : %d\n", i);
	}
	//scanf_s는 print와 반대로 문자를 입력받는 함수이다.
	//scanf하나만쓰고 여러개를 입력받고 싶다면 scanf("%d %d",&a,&b);
	//scanf에서 문자를 입력받으려면 char 변수를 만들고 %c로 입력받아야한다. 
	//만약 문자열을 받고 싶다면 %s로 입력을 받되, 문자열를 반드시 배열에 저장해야한다.
	//또한 scanf_s(" %c", &retry, 1);와 같이 문자의 크기도 표현해야한다. 영어는 알파벳당 1바이트다.*아스키코드*

	int mira = 0;
	printf("input your number\n");
	scanf_s("%d", &mira);
	printf("your number is %d", mira);


	return 0;
}
