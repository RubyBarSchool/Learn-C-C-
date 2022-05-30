#include<stdio.h>
#include<math.h>

void insert(int a[], int *n, int k, int x)
{
	for(int i=*n-1;i>=k;i--)
	{
		a[i+1]=a[i];
	}
	 a[k]=x;
	*n+=1;	
}  
