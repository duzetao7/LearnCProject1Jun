#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 10;//�ĸ��ֽ�
	int* p = &a;//ȡ��ַ//*��ָ���������p������ָ�������һ����������һ��������ַ�ı�������
	printf("%p\n", &a);//%p�Ǵ�ӡ��ַ��
	printf("%p\n", p);
	*p = 20;
	printf("%d\n", a);//*p == a,�ı�*p���ڸı�a
	char ch = 'w';
	char* pc = &ch;//char��������ʱָ��Ҳ����char
	*pc = 'q';
	printf("%c\n", ch);
	return 0;
}
