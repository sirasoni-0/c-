#include <stdio.h>


int fun1()
{
	static int i = 0;
	i++;
	return i;
}

int fun2()
{
	static int i = 0;
	i += 3;
	return i;
}

int main()
{
	fun1();
	fun1();
	fun2();
	printf("fun1ÀÇ ½ÇÇà È½¼ö:%d\n", i);


	return 0;

}