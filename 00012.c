#include<stdio.h>
int main()
{
	char a[20], b[15];
	puts("请输入账号");
	gets(a);
	puts("你输入的账号为：");
	puts(a);
	puts("请输入密码");
	gets(b);
	puts("你输入的密码为：");
	puts(b);
	return 0;
}