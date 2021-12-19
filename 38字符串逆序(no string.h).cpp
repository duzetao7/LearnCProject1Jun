#define _CRT_SECURE_NO_WARNINGS
//���ַ����ߵ�˳�򣬲���Ҫ��ӡ������ʹ��<string.h>�⺯��

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
void reverse_string(char ch[])//ѭ��
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
void reverse_string2(char ch[])//�ݹ�
{
	char tmp = ch[0];           //1    ��ch[0]�ݴ棬�Ȳ��Ž����飬���ⱻ�ٴε���
	int len = my_strlen(ch);
	ch[0] = ch[len - 1];        //2
	ch[len - 1] = '\0';         //3    ��'\0'ռ���������һ��Ԫ�ص�λ��
	if (my_strlen(ch + 1) >= 2)    //+1,��ΪҪ�ж�ʣ�µ�Ԫ��
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