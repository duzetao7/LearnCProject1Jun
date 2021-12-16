#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 10;//四个字节
	int* p = &a;//取地址//*是指针运算符，p是整型指针变量（一个包含了另一个变量地址的变量）；
	printf("%p\n", &a);//%p是打印地址的
	printf("%p\n", p);
	*p = 20;
	printf("%d\n", a);//*p == a,改变*p等于改变a
	char ch = 'w';
	char* pc = &ch;//char数据类型时指针也需用char
	*pc = 'q';
	printf("%c\n", ch);
	return 0;
}
