#define _CRT_SECURE_NO_WARNINGS
//写一个递归函数 Digitsum(n),.输入一个非负整数，返回组成它的数字之和
#include <stdio.h>
int DigitSum(int n)
{
	if (n / 10 > 0)
		return n % 10 + DigitSum(n / 10);
	else
		return n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", DigitSum(n));
	return 0;
}