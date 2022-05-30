#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter number X ");
	scanf("%d",&x);
	if(x>=1)
	{
		y = x - 1;
	}
	else 
	{
		y = 1 - y;
	}
	printf("%d",y);
	return 0;
}
