#include<stdio.h>
#include<string.h>

void xoaChuoiKiTu(char string[],int *viTri,int *soLuong);

int main()
{
	char string[100];
	int a,b,c;
	printf("Enter string: ");
	gets(string);
	printf("Vi tri can xoa la: ");
	do
	{
		scanf("%d",&a);
		if(0<a&&a<strlen(string))
		{
			break;
		}
		else
		{
			printf("Nhap lai vi tri phu hop: ");
		}
	}
	while(true);
	printf("So ki tu muon xoa la: ");
	do
	{
		scanf("%d",&b);
		c=a+b;
		if(c<strlen(string))
		{
			break;
		}
		else
		{
			printf("Nhap lai so ki tu can xoa: ");
		}
	}
	while(true);
	xoaChuoiKiTu(string,&a,&b);
	printf("String after fix is: ");
	puts(string);
}

void xoaChuoiKiTu(char string[],int *viTri,int *soLuong)
{
	int x;
	
	for(int i=(*soLuong)+(*viTri);i>(*viTri);i--)
	{
		x=i;
		do
		{
			string[x-1]=string[x];
			x++;
		}
		while(x<=strlen(string));
	}
}
