#include<stdio.h>
int main()
{
	int iFahrenheit;
	double iCelsius;
	printf("������a���¶ȣ�\n");
	scanf("%d", &iFahrenheit);
	iCelsius = 5*(iFahrenheit - 32) / 9;
	printf("��ǰa���¶�Ϊ��\n");
	printf("%f���϶�\n", iCelsius);
	return 0;
}