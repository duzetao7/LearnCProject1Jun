//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////0x0093199A 处有未经处理的异常(在 Project1().exe 中) : 0xC0000094 : Integer division by zero。//被除数不能为零，所以用到除法一定要进行非零判断。
////辗转相除法
//int main()
//{
//	unsigned int m, n, max, min;
//	scanf("%d,%d", &m, &n);
//	if (m > n)
//	{
//		max = m;
//		min = n;
//	}
//	else
//	{
//		max = n;
//		min = m;
//	}//然则没必要判断，因为若被除数更小，第一次%会商0余18（假设好24%18）
//	while (max % min)
//	{
//		max = n;
//		min = max % min;
//	}
//	printf("最大公约数为：%d\n", min);
//	printf("最小公倍数为：%d\n", (m * n) / min);
//	return 0;
//}

//若求最小公倍数，可以（1）以大者为起点寻找，也可以（2）最小公倍数 =(m * n)/最大公约数

//int main()
//{
//	int a, b, i, j;
//	scanf("%d,%d", &a, &b);
//
//	//最大公约数不可以超过两者中的最小者
//	if (a > b)
//		j = b;
//	else
//		j = a;
//
//	//从大往下找，若同时整除，必为“最大”公约数
//	for (i = j; i > 0; i--)
//	{
//		if (0 == a % i && 0 == b % i)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	//不需要考虑i=0，因为最小为1
//	return 0;
//}
