#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ģ�黯����
//��Add.c��Add.h������ɼӷ�ģ�飬���˳�ͬ��
#include "Add-Sub.h"//Ҫ��""                    <=>int Add(int x, int y);int Sub(int x, int y);//����
#include "Mul-Div.h"//�������Է���ͬһ��ͷ�ļ���
int main()
{
	int x = 6;
	int y = 2;
	printf("%d\n", Add(x, y));
	printf("%d\n", Sub(x, y));
	printf("%d\n", Mul(x, y));
	printf("%d\n", Div(x, y));
	return 0;
}