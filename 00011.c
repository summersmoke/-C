#include<stdio.h>
int main()
{
	char c1, c2;
	printf("请输入一个小写字母：\n");
	c1 = getchar();
	c2 = c1 - 32;
	printf("转换以后的字母：%c\n",c2);
	return 0;
}