#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����������͵ĵط�д�ɣ�void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap(a, b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
 }
//������������У�ֻ��x��y�����ˣ�a��b��û�н���

void Swap(int* pa, int* pb)//����Ҫ��*��
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap(&a, &b);//����Ҫ��&
	printf("������a=%d b=%d\n", a, b);
	return 0;
}