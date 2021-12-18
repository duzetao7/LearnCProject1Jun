#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//编写函数不允许创建临时变量，求字符串的长度。
//模拟实现一个 strlen函数

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