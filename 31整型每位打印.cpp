#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234,输出1234.
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%u ", n % 10);
}
int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	print(n);
	//printf("%u", n);
	return 0;
}

