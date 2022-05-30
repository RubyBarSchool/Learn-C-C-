#include<stdio.h>
#include<math.h>
int checksoarmtrong(int a)
{
	int sum=0;
	int n = a;
	int du=1;
	while(n!=0)
	{
		du=n%10;
		sum+=(du*du*du);
		n=n/10;
	}
	if(a!=sum)
	{
		return 0;
	}
	return 1;
}

