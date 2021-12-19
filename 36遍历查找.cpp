#define _CRT_SECURE_NO_WARNINGS
//找十个数中的最大值
//解法：用每一个数和max比较若大于就把值赋给max
#include <stdio.h>
int main()
{
	int i;
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	//int max = 0;//有问题，若是都小于0就会找不到最大值
	int max = arr[0];
	for (i = 1; i <= 9; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	printf("%d", max);
	return 0;
}
