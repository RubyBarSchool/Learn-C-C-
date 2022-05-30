#include<stdio.h>


void demNguyenAmPhuAm(char string[],int *nguyenAm,int *phuAm)
{
	int d;
	int i=0;
	do
	{
		d = string[i];
		if(string[i]=='a'||string[i]=='e'||string[i]=='o'||string[i]=='i'||string[i]=='u')
		{
			(*nguyenAm)++;
		}
		else if(string[i]==' ')
		{
		}
		else if(32<=d&&d<=64)
		{
		}
		else if(91<=d&&d<=96)
		{
		}
		else if(123<=d&&d<=126)
		{
		}
		else
		{
			(*phuAm)++;
		}
		i++;
	}
	while(string[i]!='\0');
}
