#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	unsigned int num1 = -10;
	unsigned int num2 = -20;
	int max = 0;
	max = Max(num1, num2);
	printf("max = %d", max);
	//printf("%u", num1);可能是以负数的方式存储（首位是1），以正数的方式拿出，所以是一个很大的数
	return 0;
}