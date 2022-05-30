#include<stdio.h>
#include<math.h>

int find(int n);

int main()
{
	int n;
	printf("Enter number N: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(find(i)==1)
		{
			printf("%d ",i);
		}
	}
} 


int find(int n)
{
	int i;
	int a = 0;
	if(n<2)
	{
		return 0;
	}
	else if(n>=2)
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				a++;
			}
		}
		if(a!=0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
		
	}
				
}
