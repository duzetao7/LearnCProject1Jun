//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 17;
//	scanf("%d", &x);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz;
//
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//midӦ�ڴ˴�ÿ�ζ�������һ��
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
//			printf("\n�ҵ�����x���±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("\n���ҵĶ����������˽�����(*^��^*)\n");
//	return 0;
//}