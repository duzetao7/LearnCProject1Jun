//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////0x0093199A ����δ��������쳣(�� Project1().exe ��) : 0xC0000094 : Integer division by zero��//����������Ϊ�㣬�����õ�����һ��Ҫ���з����жϡ�
////շת�����
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
//	}//Ȼ��û��Ҫ�жϣ���Ϊ����������С����һ��%����0��18�������24%18��
//	while (max % min)
//	{
//		max = n;
//		min = max % min;
//	}
//	printf("���Լ��Ϊ��%d\n", min);
//	printf("��С������Ϊ��%d\n", (m * n) / min);
//	return 0;
//}

//������С�����������ԣ�1���Դ���Ϊ���Ѱ�ң�Ҳ���ԣ�2����С������ =(m * n)/���Լ��

//int main()
//{
//	int a, b, i, j;
//	scanf("%d,%d", &a, &b);
//
//	//���Լ�������Գ��������е���С��
//	if (a > b)
//		j = b;
//	else
//		j = a;
//
//	//�Ӵ������ң���ͬʱ��������Ϊ����󡱹�Լ��
//	for (i = j; i > 0; i--)
//	{
//		if (0 == a % i && 0 == b % i)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	//����Ҫ����i=0����Ϊ��СΪ1
//	return 0;
//}
