#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i;
	int *p;
	int n;
	int m;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	scanf("%d",&m);
	p=(int*)calloc(m,sizeof(int));
	for(i=0;i<m;i++)
	{
		printf("%d ",*(p+i));
	}
	
}
