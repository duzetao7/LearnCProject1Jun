#define _CRT_SECURE_NO_WARNINGS
//��1��һֻ����һ�ο������� 1 ��̨�ף�Ҳ��������2 ���������������һ��n ����̨���ܹ��ж�����������                   //������쳲���������
//��2��һֻ����һ�ο�������1��̨�ף�Ҳ��������2 ��������Ҳ��������n ������ʱ����������һ��n����̨���ܹ��ж�����������//쳲��������е�ǰn���???

#include <stdio.h>
int Frog_fib(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else if (n > 2)
		return Frog_fib(n - 1) + Frog_fib(n - 2);
}
int Sfib(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else if (n > 2)
		return 2 * Sfib(n - 1);

}
int main()
{
	int sum, Ssum;
	int n = 7;
	sum = Frog_fib(n);
	Ssum = Sfib(n);
	printf("%d\n", sum);
	printf("%d\n", Ssum);
	return 0;
}