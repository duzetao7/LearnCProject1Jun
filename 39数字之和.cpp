#define _CRT_SECURE_NO_WARNINGS
//дһ���ݹ麯�� Digitsum(n),.����һ���Ǹ����������������������֮��
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