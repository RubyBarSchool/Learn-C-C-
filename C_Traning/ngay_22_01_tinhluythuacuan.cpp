#include<stdio.h>

int main()
{
	int n,x,sum,i;
	sum = 1;
	printf("Enter X: ");
	scanf("%d",&x);
	printf("Enter N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum = sum * x;
	}
	printf("%d",sum);
	return 0;
}

