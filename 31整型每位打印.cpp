#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234,���1234.
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%u ", n % 10);
}
int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	print(n);
	//printf("%u", n);
	return 0;
}

