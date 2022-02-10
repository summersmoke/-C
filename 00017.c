#include<stdio.h>
main()
{
	int a = 9;
	a = a + (a = a - (a + a));
	printf("%d\n", a);
	return 0;
}