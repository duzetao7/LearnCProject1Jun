#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//���Ȳ���1000-2000����
//	//�����ж��Ƿ�����1.�ܱ�4�����Ҳ��ܱ�100������2.�ܱ�400����
//	
//	int i = 0;
//	int count = 0;//����
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((0 == i % 4 && 0 != i % 100) || 0 == i % 400)
//		{
//			printf("%d ", i);
//			count++;
//			if (0 == count % 20)
//				printf("\n");//ÿ��20��
//		}
//	}
//	printf("\ncount is %d\n", count);
//	return 0;
//}


#include <stdio.h>//����д��
#include <math.h>
int is_leap_year(int i)
{
	int j;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n = 0;
	int count = 0;
	printf("1000-2000�������У�\n");
	for (int i = 1000; i <= 2000; i++)
	{
		if (1 == is_leap_year(i))
		{
			printf("%d ", i);
			count++;
			if (count % 10 == 0)
			{
				printf("\n");
			}
		}

	}
	printf("\n%d��", count);
	return 0;
}