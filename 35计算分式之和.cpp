#define _CRT_SECURE_NO_WARNINGS
// ����1/1 - 1/2 + 1/3 - 1/4 + 1/5 ......+ 1/99 - 1/100��ֵ����ӡ�����
#include <stdio.h>
int main()
{
	int i = 1;
	double sum = 0.0;
	int n = 2;
	switch (n)
	{
		case 1://����ⷨ
		{
			for (i = 1; i <= 10000; i++)//10.480703 ???
			{
				if (i % 2 == 0)
					sum -= 1.000 / i;
				else
					sum += 1.000 / i;
			}//1.3....?  ����Ϊ����дbreak
			break;
		}//1�㷨�ܱ�2�㷨�Ľ��������Խ�����Խ��
		case 2://������
		{
			int flag = 1;
			for (i = 1; i <= 10000; i++)//9.787606 ??? ����Ϊ����дflag *
			{
				sum += flag * 1.000 / i;
				flag = -flag;
			}
			break;
		}
	}
	printf("%lf", sum);
	return 0;
}