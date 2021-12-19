#define _CRT_SECURE_NO_WARNINGS
// 计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 ......+ 1/99 - 1/100的值，打印出结果
#include <stdio.h>
int main()
{
	int i = 1;
	double sum = 0.0;
	int n = 2;
	switch (n)
	{
		case 1://常规解法
		{
			for (i = 1; i <= 10000; i++)//10.480703 ???
			{
				if (i % 2 == 0)
					sum -= 1.000 / i;
				else
					sum += 1.000 / i;
			}//1.3....?  是因为忘了写break
			break;
		}//1算法总比2算法的结果大，且数越多相差越大
		case 2://升级版
		{
			int flag = 1;
			for (i = 1; i <= 10000; i++)//9.787606 ??? 是因为忘了写flag *
			{
				sum += flag * 1.000 / i;
				flag = -flag;
			}
			break;
		}
	}
	printf("%lf", sum);
	return 0;
}