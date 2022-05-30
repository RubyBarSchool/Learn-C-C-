#include<stdio.h>
#include<string.h>
void xoaDauCach(char c[])
{
	int i=0;
	do
	{
		if(c[0]==' ')
		{
			do
			{
				c[i]=c[i+1];	
		        i++;
			}
			while(c[i]!='\0');
		   i=-1;
		}
		i++;
	}
	while(c[i]!='\0');
	i=0;
	do
	{
		if(c[i]==' '&&c[i+1]==' ')
		{
			do
			{
				c[i]=c[i+1];
				i++;
			}
			while(c[i]!='\0');
			i=-1;
		}
		i++;
	}
	while(c[i]!='\0');
	if(c[i-1]==' ')                      // ket thuc lenh xoa 2 dau cach c[i]='\0' vi the phai xet c[i--]
	{
		c[i-1]=c[i];
	}
}


void daoNguocString(char s[],char s1[])
{
	xoaDauCach(s);
	int a,x,y=0,count=0,b;
	a =strlen(s)-1;
	b=a;
	for(int i=a;i>=0;i--)
	{
		x=i;
		if(s[x-1]==' ')
		{
			do
			{
				s1[y]=s[x];
			    y++;
			    x++;
			    count++;
			}
			while(x<=b);
			s1[y]=' ';
			y++;
			b=b-count-1;
			count = 0;
		}
		if(i==0)
		{
			do
			{
				s1[y]=s[x];
				x++;
				y++;
			}
			while(x<=b);
			s1[y]='\0';
		}
	}
}
