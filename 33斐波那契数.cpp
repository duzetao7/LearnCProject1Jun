#define _CRT_SECURE_NO_WARNINGS
//���n��쳲����������������������
#include <stdio.h>

int fib(int n)//���������㷨���д������ظ����㣬Ч��̫��
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int fib2(int n)//Ч�ʸ���
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	printf("%llu", fib2(n));
	return 0;
}
