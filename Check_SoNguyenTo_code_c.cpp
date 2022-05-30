#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
	if(n<2)
	{
	return 0;
	}
	else
	{
		for(int i=2;i<=(float)sqrt(n);i++)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
	}
	return 1;
}
