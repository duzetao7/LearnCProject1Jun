#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//模块化工程
//在Add.c和Add.h里面完成加法模块，减乘除同样
#include "Add-Sub.h"//要用""                    <=>int Add(int x, int y);int Sub(int x, int y);//声明
#include "Mul-Div.h"//声明可以放在同一个头文件里
int main()
{
	int x = 6;
	int y = 2;
	printf("%d\n", Add(x, y));
	printf("%d\n", Sub(x, y));
	printf("%d\n", Mul(x, y));
	printf("%d\n", Div(x, y));
	return 0;
}