#define _CRT_SECURE_NO_WARNINGS
//����Ļ������˷��ھ���
//�ⷨ����һ�д�ӡ1X���ڶ��д�ӡ2X���Դ�����
//��һ��ѭ���ǳ������ڶ����Ǳ�����

#include <stdio.h>
#include <windows.h>
int main()
{
	int count = 0;
	int fig = 1;
	int j = 1;
	int n;
	int a = scanf("%d", &n);
	for (int i = 1 ; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%2d*%d=%-3d  ", i, j, i * j);
			count++;
			//if (count == fig)//Ҫ����forѭ������//ʵ��û��Ҫ����ӡ����һ�оʹ�ӡ \n �ͺ���
			//{
			//	printf("\n");
			//	fig++;
			//	count = 0;
			//}
		}//Ϊʲô�˳���ʱ��i�ֱ����1 ������
		printf("\n");
		Sleep(1000);
	}
	return 0;
}