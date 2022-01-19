#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[3] = { 4,5,6 };
	int i = 0,j = 0;
	for (i = 0; i < 3 - 1; i++)//½µÐòÅÅÐò
	{
		for (j = i + 1; j < 3; j++)
		{
			if (arr[j] > arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
}