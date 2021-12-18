#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    int len = strlen("abc");
    printf("%d\n", len);
    //链式访问
    printf("%d\n", strlen("abc"));
    


    char arr1[20] = { 0 };
    char arr2[] = "bit";
    strcpy(arr1, arr2);
    printf("%s\n", arr1);
    //等同于
    printf("%s\n", strcpy(arr1, arr2));



	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}