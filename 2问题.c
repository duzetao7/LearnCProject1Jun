#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main()
{
	float p_score = 0.0;
	float c_score = 0.0;
	int round = 0;
	c_score++;
	round++;
	printf("���ʤ %f �֣�ʤ��  %.2f%%\n", p_score, (p_score * 100) / round);
	printf("����ʤ %f �֣�ʤ��  %.2f%%\n", c_score, (c_score * 100) / round);
	return 0;
}