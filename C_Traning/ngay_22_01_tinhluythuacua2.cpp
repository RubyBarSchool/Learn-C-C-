#include<stdio.h>


int main()
{
	int n,i,mul;
	mul = 1;
	printf("Enter N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		mul=mul*2;
	}
	printf("Mul = %d",mul);
	return 0;
}
