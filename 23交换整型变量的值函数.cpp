#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//函数返回类型的地方写成：void，表示这个函数不返回任何值，也不需要返回
void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d b=%d\n", a, b);
	Swap(a, b);
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
 }
//这个交换函数中，只是x和y交换了，a和b并没有交换

void Swap(int* pa, int* pb)//这里要用*，
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d b=%d\n", a, b);
	Swap(&a, &b);//这里要用&
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}