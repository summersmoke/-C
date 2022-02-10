#include<stdio.h>
int main()
{
	float a = 1.9, b = 4.2, c = 1.9;
	float d = 0.5, e = 0.3;
	int f;
	f = (int)(a / d) * (int)(b / d) * (int)(c / e);
	printf("车子可以放%d个快递箱\n", f);
	return 0;
}