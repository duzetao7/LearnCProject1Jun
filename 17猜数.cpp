#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void menu()
{
	printf("                                                  *************************\n");
	printf("                                                  ****** 1.开始游戏 *******\n");
	printf("                                                  ****** 0.退出游戏 *******\n");
	printf("                                                  *************************\n");

}
void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	
	int ret = rand() % 100 + 1;//%100的余数是0-99,然后+1,范围就是1-100
	//rand生成的是一个伪随机数，
	//printf("%d\n", ret);
	
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			Sleep(1000);
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间戳//srand需要的是unsigned int
	//srand玩一次只需要调用一次就够了，不然（放在rand之前）会让随机数离得太近
	do
	{
		system("cls");
		menu();//打印菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}

//int main()
//{
//	int magic; 
//	int guess;/*记录人猜次数的计数器变量*/
//	int counter;/*计数器变量count初始化为0*/
//	srand(time(NULL));
//	magic = rand() % 100 + 1;
//	printf("%d", magic);
//	counter = 0; 
//	do {
//		printf("Please guess a magic number:");
//		scanf("%d", &guess);
//		counter++;/*计数器变量count加1*/
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