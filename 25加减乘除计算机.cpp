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
		system("cls");                                       //�����Ļ
		printf("********************\n");
		printf("*****С�ͼ����*****\n");
		printf("*****1.��  2.��*****\n");
		printf("*****3.��  4.��*****\n");
		printf("*****  5.EXIT  *****\n");
		printf("*****�������֣�*****\n");
		printf("��������Ҫ���е�����->");
		scanf("%d", &n);                                     //�û�����ָ����뵽��Ӧ������
		switch (n)
		{

			case 1:
			{
				printf("������Ҫ��������֣��ո��������\n");//�ܲ���д��ѭ���������switch���棩����,��һ�����ͬ��Ȼ�����У���Ϊcase5����Ҫ
				scanf("%d %d", &a, &b);                      //�Ƚ���a,b��ֵ����Ȼsum���a,bδ��ʼ��
				Sum(a, b);
				break;
			}                                                //����������Ҫbreak����Ȼһֱִ��ȫ�����㣻
			case 2:
			{
				printf("������Ҫ��������֣��ո��������\n");
				scanf("%d %d", &a, &b); 
				Sub(a, b);
				break;
			}
			case 3:
			{
				printf("������Ҫ��������֣��ո��������\n");
				scanf("%d %d", &a, &b);
				Mul(a, b);
				break;
			}
			case 4:
			{
				printf("������Ҫ��������֣��ո��������\n");
				scanf("%d %d", &a, &b); 
				Div(a, b);
				break;
			}
			case 5:
				goto Exit;
			case 7:
			{
				system("cls");//�����Ļ
				printf("���ǵĹ�ͬ���ֺٺ٣��������ҵ���q(�R���Qq)\n");
				system("pause");
				break;
			}
			case 77:
			{
				system("cls");//�����Ļ
				printf("���ǵĹ�ͬ���ֺٺ٣��������ҵ���q(�R���Qq)\n");
				system("pause");
				break;
			}
			case 99:
			{
				system("cls");//�����Ļ
				printf("����Ҫ99Ѽo(*^��^*)o\n");
				system("pause");
				break;
			}

			default:                                           //�����û���������
			{
				system("cls");//�����Ļ
				printf("\n�����������ָ����������������->\n");
				Sleep(1000);
				while (getchar() != '\n')
				{
					;                                     //�����������������ѭ���������в��㣺һ��ֻ����һ���ַ�
				}
			}
		}
	}
Exit:
	system("cls");//�����Ļ
	printf("*****��ӭ�ٴ�ʹ��*****\n");
	system("pause");
	return 0;
}