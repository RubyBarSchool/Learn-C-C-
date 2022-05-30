#include<stdio.h>
int main()
{
	int year,day;
	printf("Enter Year: ");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0)
	{
		printf("Leap year!");
	}
	else
	{
		printf("Nomar year!");
	}
}
