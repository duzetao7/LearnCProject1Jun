#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int prime(int i)
//{
//	int j, flag = 1;
//	for (j = 2; j <= i / 2; ++j)
//	{
//		if (i % j == 0)
//			flag = 0;
//	}
//	return flag;
//
//}
//
//int main()
//{
//	int n, i, flag = 0;
//	printf("Enter a positive integer:\n");
//	scanf("%d", &n);
//	for (i = 2; i <= n / 2; i++)//因为是加法，加到一半就行
//	{
//		if (prime(i) != 0)//判断i是不是质数
//		{
//			if (prime(n - i) != 0)//继续判断n - i是不是质数
//			{
//				printf("Found! %d = %d + %d\n", n, i, n - i);
//				flag = 1;
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("%d can't be expressed by two prime numbers\n",n);
//	}
//	return 0;
//}

#include <math.h>
int prime(int i)
{
	int j, flag = 1;

	for (j = 2; j <= sqrt(i); ++j)//计算到n的开方根即可
	{
		if (i % j == 0)
			flag = 0;
	}

	return flag;

}
int main()//两质数之积
{
	int n, flag = 0;
	float i = 0;
	printf("Enter a positive integer:\n");
	scanf("%d", &n);
	//if (0 == n % 2)//改进：是偶数一定不可以
	//	goto Skip;
	for (i = 2; i <= sqrt(n); i++)//计算到n的开方根即可
	{
		if (prime(i) != 0)
		{
			float f = n / i - (int)(n / i);//这里应该定义为float
			if (0 == f)
			{
				if (prime(n / i) != 0)
				{
					printf("Found! %d = %.1f * %.1f\n", n, i, n / i);
					flag = 1;
				}
			}
		}
	}
Skip:
	if (flag == 0)
	{
		printf("%d can't be expressed by two prime numbers\n", n);
	}
	return 0;
}