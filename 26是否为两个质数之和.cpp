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
//	for (i = 2; i <= n / 2; i++)//��Ϊ�Ǽӷ����ӵ�һ�����
//	{
//		if (prime(i) != 0)//�ж�i�ǲ�������
//		{
//			if (prime(n - i) != 0)//�����ж�n - i�ǲ�������
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

	for (j = 2; j <= sqrt(i); ++j)//���㵽n�Ŀ���������
	{
		if (i % j == 0)
			flag = 0;
	}

	return flag;

}
int main()//������֮��
{
	int n, flag = 0;
	float i = 0;
	printf("Enter a positive integer:\n");
	scanf("%d", &n);
	//if (0 == n % 2)//�Ľ�����ż��һ��������
	//	goto Skip;
	for (i = 2; i <= sqrt(n); i++)//���㵽n�Ŀ���������
	{
		if (prime(i) != 0)
		{
			float f = n / i - (int)(n / i);//����Ӧ�ö���Ϊfloat
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