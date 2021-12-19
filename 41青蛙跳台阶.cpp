#define _CRT_SECURE_NO_WARNINGS
//（1）一只青蛙一次可以跳上 1 级台阶，也可以跳上2 级。求该青蛙跳上一个n 级的台阶总共有多少种跳法。                   //类似于斐波那契数列
//（2）一只青蛙一次可以跳上1级台阶，也可以跳上2 级……它也可以跳上n 级，此时该青蛙跳上一个n级的台阶总共有多少种跳法？//斐波那契数列的前n项和???

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