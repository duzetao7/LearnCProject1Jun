#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
	int a, b, c;

	//输入三个数
	scanf("%d %d %d", &a, &b, &c);

	//调整阶段
	if (a < b)//因为输出是按大到小，所以小的时候需要调整（若a>b不需要调整）
	{
		const int tmp = a;//用tmp缓存min，给前者赋值max，给后者赋值min
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		const int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		const int tmp = b;
		b = c;
		c = tmp;
	}

	//输出阶段
	printf("%d %d %d", a, b, c);

	return 0;
}
