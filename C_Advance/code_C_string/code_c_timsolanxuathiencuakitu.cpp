#include<stdio.h>
#include<string.h>

void locKiTu(char s[],char s1[])
{
	int i=0,j=0,a=0,b=0,count=0;
	s1[b]=s[a];
	s1[b+1]='\0';
	do
	{
		a++;
		count=0;
		i=a;
		j=0;
		do
		{
			if(s1[j]==s[i])
			{
				count++;
			}
			j++;
		}
		while(j<strlen(s1));
		if(count==0)
		{
			s1[j]=s[i];
		}
		s1[j+1]='\0';
	}
	while(s[i]!='\0');
}

void demKiTu(char a[],char b[],int c[])
{
	int i,j,count=0;
	locKiTu(a,b);
	for(i=0;i<strlen(b);i++)
	{
		for(j=0;j<strlen(a);j++)
		{
			if(b[i]==a[j])
			{
				count++;
			}
		}
		c[i]=count;
		count=0;
	}
}


int main()
{
	char string[100];
	char string1[100];
	int string2[100];
	gets(string);
	demKiTu(string,string1,string2);
	int i=0;
	for(i=0;i<strlen(string1);i++)
	{
		if(string1[i]=='A')
		{
			printf("so lan xuat hien cua ki tu A trong day la: %d",string2[i]);
		}
	}
}
