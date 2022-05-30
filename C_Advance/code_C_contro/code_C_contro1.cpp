#include<stdio.h>

int main()
{
	int ix = 6,iy = 7;
	int *px,*py;
	printf("X = %d , Y = %d\n",ix,iy);
	px = &ix;
	py = &iy;
	*px += 10;
	*py += 10;
	printf("X = %d , Y = %d",*px,*py);
	return 0;
}
