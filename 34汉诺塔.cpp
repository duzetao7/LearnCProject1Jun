#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int hanoi(int, char, char, char, int);
    int n, counter;
    printf("Input the number of diskes��");
    scanf("%d", &n);
    printf("\n");
    counter = hanoi(n, 'A', 'B', 'C', n);//m��һ��ʼ��n����Ҫ����static int i
    return 0;
}
int hanoi(int n, char x, char y, char z, int m)
{
    int move(char, int, char, int m);
    if (n == 1)
        move(x, 1, z, m);//ֻ��һ�㺺ŵ����ʱ��ֱ��x---z
    else
    {
        hanoi(n - 1, x, z, y, m);//�� n-1 ���Ƶ� y ����ȥ��
        move(x, n, z, m);        //�� n ����x---z
        hanoi(n - 1, y, x, z, m);//�� n-1 ���Ƶ� z ����ȥ
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
        printf("\n********************��%d���Ѿ�λ********************\n\n", i);//��ʾÿ�����
        i--;
    }
    if (k++ % 3 == 0)
        printf("\n");
    return 0;
}
