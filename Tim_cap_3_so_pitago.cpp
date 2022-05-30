#include<stdio.h>

int checkPiTaGo(int a,int b,int c)
{
	if(a*a==b*b+c*c)
	{
		return 1;
	}
	else if(b*b==a*a+c*c)
	{
		return 1;
	}
	else if(c*c==a*a+b*b)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			for(k=j+1;k<=n;k++)
			{
				if(checkPiTaGo(i,j,k)==1)
				{
					printf("%d %d %d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
