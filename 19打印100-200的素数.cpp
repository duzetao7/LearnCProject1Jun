#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//2-��i-1֮�������ȥ�Գ�i�����ܲ�������
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (0 == i % j) break;
		}
		//�ж�
		if (i == j)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount is %d\n", count);
	return 0;
}


int main()//΢��
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;//����i�����������������޸�Ϊ0
		for (j = 2; j < i; j++)
		{
			if (0 == i % j)
			{
				flag = 0;
				break;
			}
		}
		//�ж�
		if (flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount is %d\n", count);
	return 0;
}


#include <math.h>//sqrt������ͷ�ļ�
int main()//��΢��
{
	//��m = a * b����a��b��������һ���� <= ��ƽ��m��
	//�������������
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1; 
		for (j = 2; j <=sqrt(i); j++)//ֻ�� <= sqrt(i)
		{
			if (0 == i % j)
			{
				flag = 0;
				break;
			}
		}
		//�ж�
		if (flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount is %d\n", count);
	return 0;
}


#include <math.h>
int main()//����΢��
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)//ż��������������
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (0 == i % j)
			{
				flag = 0;
				break;
			} 
		}
		//�ж�
		if (flag)
		{
			printf("%d ", i);
			count++;
			if (0 == count % 4)
				printf("\n");//�ĸ�һ��
		}
	}
	printf("\ncount is %d\n", count);
	return 0;
}