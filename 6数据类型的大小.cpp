#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("%d\n", sizeof(char));//char的左右一定要加（）
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int)); 
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}