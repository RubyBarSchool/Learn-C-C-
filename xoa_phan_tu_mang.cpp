#include<stdio.h>
#include<math.h>

void del(int a[],int *n,int k)
{
	
	for(int i=k;i<*n;i++)
	{
		a[i]=a[i+1];
	}
	*n-=1;
}
