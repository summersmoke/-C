#include<stdio.h>
main()
{
	int x, y, tempt;
	scanf("%d,%d", &x, &y);
	tempt = y;
	y = x;
	x = tempt;
	printf("x=%d,y=%d\n", x, y);
	return 0;
}