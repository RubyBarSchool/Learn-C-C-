#include<stdio.h>

int main()
{
	int m,n,x,i,j,a[100][100];
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int max;
	max=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max==a[i][j])
			{
				printf("vi tri cua max:a[%d][%d]",i,j);
			}
		}
	}
}
