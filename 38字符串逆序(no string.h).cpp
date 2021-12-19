#define _CRT_SECURE_NO_WARNINGS
//将字符串颠倒顺序，不需要打印，不能使用<string.h>库函数

#include <stdio.h>
int my_strlen(char* p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
void reverse_string(char ch[])//循环
{
	int left = 0;
	int right = my_strlen(ch) - 1;
	while (left < right)
	{
		int tmp = ch[left];//ch[left] <=> *(ch + left)
		ch[left] = ch[right];
		ch[right] = tmp;
		left++;
		right--;
	}
}
void reverse_string2(char ch[])//递归
{
	char tmp = ch[0];           //1    把ch[0]暂存，先不放进数组，避免被再次调换
	int len = my_strlen(ch);
	ch[0] = ch[len - 1];        //2
	ch[len - 1] = '\0';         //3    用'\0'占据数组最后一个元素的位置
	if (my_strlen(ch + 1) >= 2)    //+1,因为要判断剩下的元素
		reverse_string2(ch + 1);//4
	ch[len - 1] = tmp;          //5
}

int main()
{
	char ch[] = "abcdef";
	reverse_string2(ch);
	printf("%s", ch);
	return 0;
}