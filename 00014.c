#include<stdio.h>
int main()
{
	int iFahrenheit;
	double iCelsius;
	printf("请输入a国温度：\n");
	scanf("%d", &iFahrenheit);
	iCelsius = 5*(iFahrenheit - 32) / 9;
	printf("当前a国温度为：\n");
	printf("%f摄氏度\n", iCelsius);
	return 0;
}