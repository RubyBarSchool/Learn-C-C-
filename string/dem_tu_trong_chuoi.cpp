#include<stdio.h>
#include<string.h>
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
	xoadaucach(s);
}


int demTu(char a[],char b[])
{
	int i;
	int x;
	int count=0;
	do
	{
		catTu(a,b);
		if(strlen(b)<2)
		{
			count--;
		}
		else
		{
			for(i=0;i<strlen(b);i++)
		    {
			x=b[i];
			if((65<=x&&x<=90)||(97<=x&&x<=122))
			{
			}
			else
			{
				count--;
				break;
			}
		    }
		}
		
		count++;
	}
	while(strlen(a)!=0);
	return count;
}

int main()
{
	char string[100];
	char string1[100];
	gets(string);
	int a=0;
	a=demTu(string,string1);
	printf("%d",a);
}
