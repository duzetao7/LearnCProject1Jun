#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n;
	int fn = 1;
	printf("������Ҫ����׳˵�����n��");
	scanf("%d", &n);
	for (i = 1; i <= n ; i++)
		fn *= i ;
	printf("%d�Ľ׳���%d",n, fn);
	return 0;
}

int main()//����1��n�Ľ׳�֮��
{
	int i = 1;
	int n = 0;
	int xn = 0;
	printf("����1��n�Ľ׳�֮�ͣ�");
	scanf("%d", &n);
	while (i <= n)//����iһ�����ƽ�n��ÿ��i������һ�ν׳˼��뵽xn
	{
		int fn = 1;//����Ҫ�ڴ˴����壬��֤ÿ����while��ѭ������ʼ��fn����Ȼfn��ֵ�����ۻ������߸�fn��ֵ1
		for (int j = 1; j <= i; j++)//����Ҫ�ڴ˴�����j����֤ÿ����for��ѭ������ʼ��j����Ȼj��ֵ�����ۻ�
		{
			fn *= j;
		}
		xn += fn;
		i++;
	}
	printf("1��%d�Ľ׳�֮����%d", n, xn);
	return 0;
}

int main()//����1��n�Ľ׳�֮��*****��ǿ��*****
{
	int i = 1;
	int n = 0;
	int xn = 0;
	int fn = 1;
	printf("����1��n�Ľ׳�֮�ͣ�");
	scanf("%d", &n);
	for (; i <= n; i++)//˼·��3�Ľ׳˵���2�Ľ׳˳���3��n�Ľ׳˵��ڣ�n-1���Ľ׳˳���n
	{
		fn *= i;
		xn += fn;
	}
	printf("1��%d�Ľ׳�֮����%d", n, xn);
	return 0;
}