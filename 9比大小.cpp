#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	unsigned int num1 = -10;
	unsigned int num2 = -20;
	int max = 0;
	max = Max(num1, num2);
	printf("max = %d", max);
	//printf("%u", num1);�������Ը����ķ�ʽ�洢����λ��1�����������ķ�ʽ�ó���������һ���ܴ����
	return 0;
}