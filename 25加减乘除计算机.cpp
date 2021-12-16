#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

void Sum(int a, int b)
{
	printf("Sum is %d\n", a + b);
	system("pause");
}

void Sub(int a, int b)
{
	printf("Sub is %d\n", a - b);
	system("pause");
}

void Mul(int a, int b)
{
	printf("Mul is %d\n", a * b);
	system("pause");
}

void Div(int a, int b)
{
	printf("Div is %d\n", a / b);
	system("pause");
}

int main()
{
	int a, b, n;
	while (1)
	{
		system("cls");                                       //清空屏幕
		printf("********************\n");
		printf("*****小型计算机*****\n");
		printf("*****1.＋  2.－*****\n");
		printf("*****3.×  4.÷*****\n");
		printf("*****  5.EXIT  *****\n");
		printf("*****其他数字？*****\n");
		printf("请输入你要进行的运算->");
		scanf("%d", &n);                                     //用户输入指令进入到相应的运算
		switch (n)
		{

			case 1:
			{
				printf("请输入要计算的数字（空格隔开）：\n");//能不能写个循环？放这里（switch外面）就行,下一条语句同理。然而不行，因为case5不需要
				scanf("%d %d", &a, &b);                      //先接收a,b的值，不然sum里的a,b未初始化
				Sum(a, b);
				break;
			}                                                //必须计算完就要break，不然一直执行全部运算；
			case 2:
			{
				printf("请输入要计算的数字（空格隔开）：\n");
				scanf("%d %d", &a, &b); 
				Sub(a, b);
				break;
			}
			case 3:
			{
				printf("请输入要计算的数字（空格隔开）：\n");
				scanf("%d %d", &a, &b);
				Mul(a, b);
				break;
			}
			case 4:
			{
				printf("请输入要计算的数字（空格隔开）：\n");
				scanf("%d %d", &a, &b); 
				Div(a, b);
				break;
			}
			case 5:
				goto Exit;
			case 7:
			{
				system("cls");//清空屏幕
				printf("我们的共同数字嘿嘿，有心啦我的晴q(≧▽≦q)\n");
				system("pause");
				break;
			}
			case 77:
			{
				system("cls");//清空屏幕
				printf("我们的共同数字嘿嘿，有心啦我的晴q(≧▽≦q)\n");
				system("pause");
				break;
			}
			case 99:
			{
				system("cls");//清空屏幕
				printf("我们要99鸭o(*^＠^*)o\n");
				system("pause");
				break;
			}

			default:                                           //避免用户错误输入
			{
				system("cls");//清空屏幕
				printf("\n你输入的运算指令有误，请重新输入->\n");
				Sleep(1000);
				while (getchar() != '\n')
				{
					;                                     //避免输入符号陷入死循环，但美中不足：一次只能拿一个字符
				}
			}
		}
	}
Exit:
	system("cls");//清空屏幕
	printf("*****欢迎再次使用*****\n");
	system("pause");
	return 0;
}