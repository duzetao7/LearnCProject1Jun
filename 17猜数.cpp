#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void menu()
{
	printf("                                                  *************************\n");
	printf("                                                  ****** 1.��ʼ��Ϸ *******\n");
	printf("                                                  ****** 0.�˳���Ϸ *******\n");
	printf("                                                  *************************\n");

}
void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	
	int ret = rand() % 100 + 1;//%100��������0-99,Ȼ��+1,��Χ����1-100
	//rand���ɵ���һ��α�������
	//printf("%d\n", ret);
	
	//2.������
	int guess = 0;
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			Sleep(1000);
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ���//srand��Ҫ����unsigned int
	//srand��һ��ֻ��Ҫ����һ�ξ͹��ˣ���Ȼ������rand֮ǰ��������������̫��
	do
	{
		system("cls");
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}

//int main()
//{
//	int magic; 
//	int guess;/*��¼�˲´����ļ���������*/
//	int counter;/*����������count��ʼ��Ϊ0*/
//	srand(time(NULL));
//	magic = rand() % 100 + 1;
//	printf("%d", magic);
//	counter = 0; 
//	do {
//		printf("Please guess a magic number:");
//		scanf("%d", &guess);
//		counter++;/*����������count��1*/
//		if (guess > magic)
//			printf("Wrong! Too high!\n");
//		else if (guess < magic)
//			printf("Wrong! Too low!\n"); 
//		else
//			printf("Right!\n");
//	} while (guess != magic);
//	printf("counter = %d \n", counter);
//	return 0;
//}