#define _CRT_SECURE_NO_WARNINGS
//��ʮ�����е����ֵ
//�ⷨ����ÿһ������max�Ƚ������ھͰ�ֵ����max
#include <stdio.h>
int main()
{
	int i;
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	//int max = 0;//�����⣬���Ƕ�С��0�ͻ��Ҳ������ֵ
	int max = arr[0];
	for (i = 1; i <= 9; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	printf("%d", max);
	return 0;
}
