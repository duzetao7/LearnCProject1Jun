#define _CRT_SECURE_NO_WARNINGS
//ð�������˼�� : �������ڵ�Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ������
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	//ȷ������,sz - 1 = 9
	int i = 0;
	for (i = 0; i < sz - 1; i++)//0 - 8 Ϊ9�ˣ��ʣ�=9
	{
		//ȷ��ÿ�˵Ĵ���sz - 1 - i
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)         //!!!����ȡ=
		{
			if (arr[j] > arr[j + 1])//Ҫ��Ϊ�����������򲻷����û�
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
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };//����Ϊ����
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
//Run - Time Check Failure #2 - Stack around the variable 'arr' was corrupted.

