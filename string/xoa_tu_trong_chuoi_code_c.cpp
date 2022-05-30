#include<stdio.h>
#include<string.h>
void xoaTu(char s[],char s1[]);
void xoadaucach(char *string);

int main()
{
	char string[100];
	char string1[100];
	char string2[100];
	gets(string);
	gets(string1);
	xoaTu(string,string1);
	xoadaucach(string);
	puts(string);
	puts(string1);
	return 0;
}


void xoaTu(char s[],char s1[])
{
	int i;
	int n=0;
	int count=0;
	int x,m;
	int z;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==s1[n])
		{
			m=i;
			do
			{
				if(s[m]!=s1[n])
				{
					count++;
				}
				m++;
				n++;
			}
			while(s1[n]!='\0');
			if(s[m]!=' '&&s[m]!='\0')
			{
				count++;
			}
			n=0;
			x=i+strlen(s1);
			z=i;
			if(count==0)
			{
				do
				{
					s[z]=s[x];
					z++;
					x++;
				}
				while(s[x-1]!='\0');
			}
			count=0;
		}
	}
}

void xoadaucach(char *string)
{
	int i=0;
	do
	{
		if(i==0 && string[i]==' ')
		{
			do
			{
				string[i]=string[i+1];
				i++;
			}
			while(string[i]!='\0');
			i=-1;
		}
		else if(string[i]==' '&&string[i+1]==' ')
		{
			do
			{
				string[i]=string[i+1];
				i++;
			}
			while(string[i]!='\0');
			i=0;
		}
		i++;
	}while(string[i]!='\0');
}
