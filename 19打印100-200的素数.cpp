#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//2-》i-1之间的数字去试除i，看能不能整除
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (0 == i % j) break;
		}
		//判断
		if (i == j)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount is %d\n", count);
	return 0;
}


int main()//微变
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;//假设i是素数，若不是则修改为0
		for (j = 2; j < i; j++)
		{
			if (0 == i % j)
			{
				flag = 0;
				break;
			}
		}
		//判断
		if (flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount is %d\n", count);
	return 0;
}


#include <math.h>//sqrt函数的头文件
int main()//再微变
{
	//若m = a * b，则a和b中至少有一个是 <= 开平方m的
	//大大减少相除次数
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1; 
		for (j = 2; j <=sqrt(i); j++)//只需 <= sqrt(i)
		{
			if (0 == i % j)
			{
				flag = 0;
				break;
			}
		}
		//判断
		if (flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount is %d\n", count);
	return 0;
}


#include <math.h>
int main()//再再微变
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)//偶数不可能是素数
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (0 == i % j)
			{
				flag = 0;
				break;
			} 
		}
		//判断
		if (flag)
		{
			printf("%d ", i);
			count++;
			if (0 == count % 4)
				printf("\n");//四个一行
		}
	}
	printf("\ncount is %d\n", count);
	return 0;
}