#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格:%d元\n", b1.price);
	//struct Book* pb = &b1;//利用pb打印我的书名和价格
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	strcpy(b1.name, "C++");// strcpy- string copy-字符申拷贝-库函数- string.h
	printf("%s\n", b1.name);
	return 0;
}