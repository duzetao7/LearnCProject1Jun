#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int sco[4] = {0};
    scanf("%d;%d,%d,%d", &sco[0], &sco[1], &sco[2], &sco[3]);
    printf("The each subject score of No. %d is %.2d, %.2d, %.2d.", sco[0], sco[1], sco[2], sco[3]);
    return 0;
}
