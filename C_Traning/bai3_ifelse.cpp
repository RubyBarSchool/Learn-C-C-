#include<stdio.h>
int main()
{
	int kw,t;
	printf("Enter number Kw: ");
	scanf("%d",&kw);
	if(kw<=100)
	{
		t = 2000*kw;
		printf("%d",t);
	}
	else if(100 < kw && kw <= 200)
	{
		t = (kw-100)*2500 + 100*2000;
		printf("%d",t);
	}
	else if(kw>200)
	{
		printf("Ban phai ban nha de tra tien ! hehe ");
	}
	return 0;
}
