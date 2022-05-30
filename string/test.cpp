#include<stdio.h>

int main()
{
	
	int n;
	int x;
	int sum=0;
	float tbc;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		sum+=x;
	}
	tbc=(float)sum/n;
	printf("%.2f",tbc);
     return 0;	
}
