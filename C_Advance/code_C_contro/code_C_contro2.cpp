#include<stdio.h>

int main()
{
	int a[5];
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;
	a[5] = 5;
	int *p = a;
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p+i));
	}
	return 0;
}
