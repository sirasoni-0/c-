//���� �����
//���: ��Ģ����, ����� ������ �� �Ұųİ� ����� ��� �ϴ��� �ƴϸ� ����
//��ǥ: printf�� scanf_s ����, �ڷ����� �ݺ��� switch�� ����.



#include<stdio.h>
//���� ��Ģ���� �Լ� ����
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
	//retry�� ������ ���� ����
	char retry = 'y';
	//���� ù ����
	printf("----------------------------\nl");
	printf("     �����Դϴ�!         l\n");
	printf("----------------------------\n");
	//���� ����
	while (retry == 'y')
	{
		int input_num1 = 0;
		int input_num2 = 0;
		int operators = 0;
		int result = 0;
		//���� �Է� �ޱ�
		printf("����� ���� 2���� �־��ּ���!:\n");
		scanf_s("%d %d", &input_num1, &input_num2);
		
		//������ ���ϱ�
		printf("1(���ϱ�), 2(����), 3(���ϱ�), 4(������) �������ּ���.\n");
		scanf_s("%d", &operators);
		//���� ����
		switch (operators)
		{
		case(1):
			
			result = addition(input_num1, input_num2);
			printf("��°��� %d�Դϴ�!", result);
			break;
		case(2):
			
			result = subtraction(input_num1, input_num2);
			printf("��°��� %d�Դϴ�!", result);
			break;
		case(3):
			
			result = multiplication(input_num1, input_num2);
			printf("��°��� %d�Դϴ�!", result);
			break;
		case(4):
		
			result = division(input_num1, input_num2);
			printf("��°��� %d�Դϴ�!", result);
			break;
		default:
			printf("�ùٸ� �����ڸ� ����ּ���");
		}
		printf("����� �� �Ͻðڽ��ϱ�?(y/n)\n");
		scanf_s(" %c", &retry, 1);
		


	}
	return 0;
}