#include<stdio.h>
#include<string.h>
void catTu(char s[], char s1[]);
void xoaTu(char s[],char s1[]);

int main()
{
	char string[100];   // so tu muon gioi han
	char string1[100];    
	char string2[100];   // chuoi muon che tu noi tuc
	gets(string);
	gets(string2);
	while(strlen(string)!=0)
	{
		catTu(string,string1);
		xoaTu(string2,string1);
	}
	puts(string2);

	return 0;
}

void catTu(char s[], char s1[])
{
	int i;
	int a=0;
	int n;
	int m;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			break;
		}
		s1[a]=s[i];
		a++;
		for(n=i;n<strlen(s);n++)
		{
			s[n]=s[n+1];
		}
		i--;
	}
	s1[a]='\0';
	for(m=0;m<strlen(s);m++)
	{
		s[m]=s[m+1];
	}
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
			x=strlen(s1)-1;
			z=i+1;
			if(count==0)
			{
				do
				{
					s[z]='*';
					z++;
					x--;
				}
				while(x!=0);
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

