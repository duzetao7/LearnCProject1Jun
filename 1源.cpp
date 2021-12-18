#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char ch1[] = "bit";            //4个元素   长度为3
	//char ch2[] = { 'b', 'i', 't' };//3个元素   长度任意
	char* p = ch1;
	printf("%p\n", *p);
	printf("%p\n", p);
	printf("%p\n", ch1);
	printf("%p\n", ch1[0]);
	printf("%p\n", ch1[1]);
	printf("%p\n", ch1[2]);
	printf("%p\n", p + 1);
	return 0;
}
