#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,s;
	char pheptinh;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	
	fflush(stdin);
	scanf("%c",&pheptinh);
	switch(pheptinh)
	{
		case '*': printf("%d",a*b);
		          break;
		case '/': printf("%d",(a/b));
		          break;
		case '+': printf("%d",(a+b));
		          break;
		case '-': printf("%d",(fabs(a-b)));
		          break;
	}
}
