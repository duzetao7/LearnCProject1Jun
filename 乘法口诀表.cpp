#define _CRT_SECURE_NO_WARNINGS
//在屏幕上输出乘法口诀表
//解法：第一行打印1X，第二行打印2X，以此类推
//第一层循环是乘数，第二层是被乘数

#include <stdio.h>
int main()
{
	int count = 0;
	int fig = 1;
	int j = 1;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d  ", i, j, i * j);
			count++;
			if (count == fig)//要放在for循环里面
			{
				printf("\n");
				fig++;
				count = 0;
			}//为什么退出的时候i又变成了1 ？？？

		}

	}
	return 0;
}