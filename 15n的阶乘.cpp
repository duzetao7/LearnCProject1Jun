#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n;
	int fn = 1;
	printf("请输入要计算阶乘的数字n：");
	scanf("%d", &n);
	for (i = 1; i <= n ; i++)
		fn *= i ;
	printf("%d的阶乘是%d",n, fn);
	return 0;
}

int main()//计算1到n的阶乘之和
{
	int i = 1;
	int n = 0;
	int xn = 0;
	printf("计算1到n的阶乘之和：");
	scanf("%d", &n);
	while (i <= n)//利用i一步步逼近n，每次i都计算一次阶乘加入到xn
	{
		int fn = 1;//必须要在此处定义，保证每次在while的循环都初始化fn，不然fn的值不断累积；或者给fn赋值1
		for (int j = 1; j <= i; j++)//必须要在此处定义j，保证每次在for的循环都初始化j，不然j的值不断累积
		{
			fn *= j;
		}
		xn += fn;
		i++;
	}
	printf("1到%d的阶乘之和是%d", n, xn);
	return 0;
}

int main()//计算1到n的阶乘之和*****加强版*****
{
	int i = 1;
	int n = 0;
	int xn = 0;
	int fn = 1;
	printf("计算1到n的阶乘之和：");
	scanf("%d", &n);
	for (; i <= n; i++)//思路：3的阶乘等于2的阶乘乘以3，n的阶乘等于（n-1）的阶乘乘以n
	{
		fn *= i;
		xn += fn;
	}
	printf("1到%d的阶乘之和是%d", n, xn);
	return 0;
}