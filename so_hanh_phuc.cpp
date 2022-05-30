#include<stdio.h>

int checkSoHanhPhuc(int n)
{
	int phanDau=0,phanDuoi=0;
	int sum=0,sum1=0;
	if(n<0)
	{
		return 0;
	}
	if(n==0)
	{
		return 1;
	}
	if(0<n&&n<1000)
	{
		return 0;
	}
	phanDuoi=n%1000;
	phanDau=n/1000;
	do
	{
			sum+=phanDuoi%10;
			phanDuoi=phanDuoi/10;
	}
	while(phanDuoi>0);
		
	do
	{
			sum1+=phanDau%10;
			phanDau=phanDau/10;
	}
	while(phanDau>0);	

	if(sum!=sum1)
	{
			return 0;
	}
	else
	{
		  return 1;
	}
}

int main()
{
	int i;
	for(i=0;i<1000000;i++)
	{
		if(checkSoHanhPhuc(i)==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
