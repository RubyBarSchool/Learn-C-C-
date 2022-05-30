#include<stdio.h>
int main()
{
	int a,b,c;
    int max;
    printf("Enter number :");
    scanf("%d %d %d",&a,&b,&c);
    max = (a>b)?a:b;
    max = (max>c)?max:c;
    printf("number max %d",max);
	
}

