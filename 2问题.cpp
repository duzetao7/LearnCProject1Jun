#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	char ch1[] = "bit";
	char ch2[] = { 'b', 'i', 't' };
	int sz0 = sizeof(arr) / sizeof(arr[0]);
	int sz1 = sizeof(ch1) / sizeof(ch1[0]);
	int sz2 = sizeof(ch2) / sizeof(ch2[0]);
	printf("%d %d %d", sz0, sz1, sz2);
	return 0;
}
