#define _CRT_SECURE_NO_WARNINGS
//����Ļ������˷��ھ���
//�ⷨ����һ�д�ӡ1X���ڶ��д�ӡ2X���Դ�����
//��һ��ѭ���ǳ������ڶ����Ǳ�����

#include <stdio.h>
int main()
{
	int count = 0;
	int fig = 1;
	int j = 1;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d  ", i, j, i * j);
			count++;
			if (count == fig)//Ҫ����forѭ������
			{
				printf("\n");
				fig++;
				count = 0;
			}//Ϊʲô�˳���ʱ��i�ֱ����1 ������

		}

	}
	return 0;
}