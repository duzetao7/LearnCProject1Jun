#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��д��������������ʱ���������ַ����ĳ��ȡ�
//ģ��ʵ��һ�� strlen����

int my_strlen(char* p)
{
	if (*p != '\0')
		return 1 + my_strlen(p + 1);
	else
		return 0;
}

int main()
{
	char ch[] = "bit";
	printf("%d", my_strlen(ch));
	return 0;
}