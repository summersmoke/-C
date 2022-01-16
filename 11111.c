#include<stdio.h>
int main(void)
{
	unsigned int x = 12;
	unsigned int y = 012;
	unsigned int z = 0x12;
	printf("十进制%u转换为八进制%o十六进制%x\n", x, x, x);
	printf("十进制%u转换为八进制%o十六进制%x\n",y,y,y,);
	printf("十进制%u转换为八进制%o十六进制%x\n", z,z,z);
return 0}