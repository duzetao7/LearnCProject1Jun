#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[3] = { 5,4,6 };
	for (int i = 0; i < 3 - 1; i++)//½µÐòÅÅÐò
	{
		int j = i;
		int k = j + 1;
		for (int k = j + 1;j < 3; j++)
		{
			if (arr[j] > arr[k])
			{
				int temp = k;
				k = j;
				j = temp;
			}
		}
		int temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;

	}
	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
	return 0;
}