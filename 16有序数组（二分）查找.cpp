#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int binary_search(int arr[], int x, int sz)//ʵ����Ӧ���� int binary_search(  int* arr  , int x, int sz)//[]����д����Ҳ��û�������//���Ա����ں����ⲿ��Ԫ�ظ�����������ں����ڲ��󲻵�
{
	int left = 0;
	int right = sz - 1;//����Ѳ���sz������//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���//��������ȥ��������Ԫ�صĵ�ַ

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < x)
			left = mid + 1;//��Ҫ��һ�����⣨8+9��/2 = 8 ������ѭ��
		else if (arr[mid] > x)
			right = mid - 1;
		else
			return mid;
	}
	if (left > right)
		return -1;
}

int main()//����д��
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//���鶨����Ҫ[]
	int x = 77;
	int sz = sizeof(arr) / sizeof(arr[0]);//�����С����һ��Ԫ�صĴ�С���õ�Ԫ�ظ�����Ϊ���Ǹ�ֵ��right
	int ret = binary_search(arr, x, sz);//���պ������ص�ֵ������ʱ��arr����������"arr[]"ɶҲ����
	if (-1 != ret)                      //���صĲ���-1��֤���ҵ���
		printf("�ҵ�����x���±���%d", ret);
	else                                //��������Ҳ���
		printf("�Ҳ���");
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