#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int hanoi(int, char, char, char, int);
    int n, counter;
    printf("Input the number of diskes：");
    scanf("%d", &n);
    printf("\n");
    counter = hanoi(n, 'A', 'B', 'C', n);//m是一开始的n，需要传给static int i
    return 0;
}
int hanoi(int n, char x, char y, char z, int m)
{
    int move(char, int, char, int m);
    if (n == 1)
        move(x, 1, z, m);//只有一层汉诺塔的时候，直接x---z
    else
    {
        hanoi(n - 1, x, z, y, m);//把 n-1 层移到 y 上面去，
        move(x, n, z, m);        //把 n 操作x---z
        hanoi(n - 1, y, x, z, m);//把 n-1 层移到 z 上面去
    }
    return 0;
}
int move(char getone, int n, char putone, int m)
{
    static int k = 1;
    printf("%2d:%3d # %c---%c\n", k, n, getone, putone);
    static int i = m;
    if (i == n)
    {
        printf("\n********************第%d层已就位********************\n\n", i);//显示每层完成
        i--;
    }
    if (k++ % 3 == 0)
        printf("\n");
    return 0;
}
