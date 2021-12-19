#define _CRT_SECURE_NO_WARNINGS
//计算n的k次方
#include <stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else 
		return 1.0 / Pow(n, -k);
}
int main()
{
	int n, k;
	int a = scanf("%d %d", &n, &k);
	printf("%lf", Pow(n, k));
	return 0;
}