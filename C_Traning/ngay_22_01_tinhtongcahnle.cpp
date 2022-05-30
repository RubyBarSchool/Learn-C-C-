#include<stdio.h>

int main()
{
	int n,i,sumchan,sumle;
	sumchan = 0;
	sumle = 0;
	printf("Enter N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sumchan = sumchan + i;
		}
		else
		{
			sumle = sumle + i;
		}
	}
	printf("sumchan = %d\n",sumchan);
	printf("sumle = %d",sumle);
	return 0;
}
