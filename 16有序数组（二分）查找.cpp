#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int binary_search(int arr[], int x, int sz)//实际上应该是 int binary_search(  int* arr  , int x, int sz)//[]里面写数字也是没有意义的//所以必须在函数外部把元素个数求出来，在函数内部求不到
{
	int left = 0;
	int right = sz - 1;//必须把参数sz传过来//数组arr传参，实际传递的不是数组的本身//仅仅传过去了数组首元素的地址

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < x)
			left = mid + 1;//需要加一，避免（8+9）/2 = 8 陷入死循环
		else if (arr[mid] > x)
			right = mid - 1;
		else
			return mid;
	}
	if (left > right)
		return -1;
}

int main()//函数写法
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//数组定义需要[]
	int x = 77;
	int sz = sizeof(arr) / sizeof(arr[0]);//数组大小除以一个元素的大小，得到元素个数，为的是赋值给right
	int ret = binary_search(arr, x, sz);//接收函数返回的值。传的时候传arr是数组名，"arr[]"啥也不是
	if (-1 != ret)                      //返回的不是-1，证明找到了
		printf("找到啦，x的下标是%d", ret);
	else                                //否则就是找不到
		printf("找不到");
	return 0;
}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 7;
//	scanf("%d", &x);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//mid应在此处每次都重新算一次
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("\n找到啦！x的下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("\n你找的东西被外星人劫走了(*^▽^*)\n");
//	return 0;
//}