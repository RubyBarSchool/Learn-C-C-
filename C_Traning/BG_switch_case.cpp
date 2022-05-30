#include<stdio.h>

int main()
{
	int a;
	printf("Nhap a");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("Ban vua nhap vao so 1.");
		        break;
		case 2: printf("Ban vua nhap vao so 2.");
		        break;
		case 3: printf("Ban vua nhap vao so 3.");
		        break;
		default: printf("Ban vua nhap vao 1 so sai.");
	}
}
