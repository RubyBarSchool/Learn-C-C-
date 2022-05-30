#include<stdio.h>
#include<string.h>
void daoNguocChuoi(char a[],char b[]);

int main()
{
	char string[100];
	char string1[100];
	gets(string);
	daoNguocChuoi(string,string1);
	puts(string1);
}

void daoNguocChuoi(char a[],char b[])
{
	int i;
	int j=0;
	for(i=strlen(a)-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
}
