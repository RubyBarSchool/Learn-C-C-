#include<stdio.h>
#include<string.h>

int timTu(char string[],char string1[],int *vitri)
{
	int i,a,b,count=0;
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]==string1[0])
		{
			a=i;
			b=0;
			count=0;
			do
			{
				if(string[a]!=string1[b])
				{
					count++;
				}
				a++;
				b++;
			}
			while(string1[b]!='\0');
		}
	}
	if(count==0)
	{
		for(i=0;i<strlen(string);i++)
	{
		if(string[i]==string1[0])
		{
			a=i;
			b=0;
			count=0;
			do
			{
				if(string[a]!=string1[b])
				{
					count++;
				}
				a++;
				b++;
			}
			while(string1[b]!='\0');
			if(count==0)
			{
				(*vitri)=i;
				break;
			}
		}
	}
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char a[100];
	char b[100];
	gets(a);
	gets(b);
	int n;
	if(timTu(a,b,&n)==1)
	{
		printf("chuoi a chua chuoi b va vi tri la %d",n);
	}
	else
	{
		printf("chuoi a ko chua b");
	}
}
