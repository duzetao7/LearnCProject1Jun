#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
	int a, b, c;

	//����������
	scanf("%d %d %d", &a, &b, &c);

	//�����׶�
	if (a < b)//��Ϊ����ǰ���С������С��ʱ����Ҫ��������a>b����Ҫ������
	{
		const int tmp = a;//��tmp����min����ǰ�߸�ֵmax�������߸�ֵmin
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		const int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		const int tmp = b;
		b = c;
		c = tmp;
	}

	//����׶�
	printf("%d %d %d", a, b, c);

	return 0;
}
