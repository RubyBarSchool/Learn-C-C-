#include<stdio.h>
#include<math.h>

int fibonaci(int a)
{
	int b=1;
	int c=1;
	int count=2;
	int sum;
	while(count<=a)
	{
		sum=b+c;
		c=b;
		b=sum;
		count++;
	}
	return sum;
}


