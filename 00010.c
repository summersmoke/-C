#include<stdio.h>
int main()
{
	int a = 130, b = 40, x, y;
	x = (4 * b - a) / 2;
	y = (a - 2 * b) / 2;
	printf("笼中有%d只鸡，有%d只兔！\n", x, y);
	return 0;
}