#include<stdio.h>
#include<string.h>

int main()
{
	char string[]="AAAAAAAAA";
	char string1[]="BBBBB";
	strcpy(string,string1);
	printf("%s",string);
}
