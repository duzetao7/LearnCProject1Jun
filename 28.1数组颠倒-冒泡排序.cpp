#define _CRT_SECURE_NO_WARNINGS
//冒泡排序的思想 : 两两相邻的元素进行比较，并且可能的话需要交换！
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	//确定趟数,sz - 1 = 9
	int i = 0;
	for (i = 0; i < sz - 1; i++)//0 - 8 为9趟，故！=9
	{
		//确定每趟的次数sz - 1 - i
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)         //!!!不能取=
		{
			if (arr[j] > arr[j + 1])//要求为升序，若大于则不符，得换
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };//排序为升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
//Run - Time Check Failure #2 - Stack around the variable 'arr' was corrupted.

