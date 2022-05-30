#include<stdio.h>
#include<string.h>

void chenString(char string[],char string1[],int viTri)
{
	int i;
	string[strlen(string)+strlen(string1)+1]='\0';
	for(i=strlen(string)-1;i>=viTri;i--)
	{
		string[i+strlen(string1)]=string[i];
	}
	int j=0;
	for(i=viTri;i<strlen(string1)+viTri;i++)
	{
		string[i]=string1[j];
		j++;
	}
}

