#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Reverse()
{
	char c;
	scanf("%c", &c);
	if (c != '\n')
	{
		Reverse();
		printf("%c", c);
	}
}
int main()
{
	printf("Enter a sentence:");
	Reverse();
	return 0;
}