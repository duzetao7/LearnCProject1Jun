#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	struct Book b1 = { "C���Գ������",55 };
	//printf("������%s\n", b1.name);
	//printf("�۸�%d\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);
	//struct Book* pb = &b1;//����pb��ӡ�ҵ������ͼ۸�
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	strcpy(b1.name, "C++");// strcpy- string copy-�ַ��꿽��-�⺯��- string.h
	printf("%s\n", b1.name);
	return 0;
}