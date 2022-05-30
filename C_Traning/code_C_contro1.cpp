#include<stdio.h>

int main()
{
	int *poiter;
	int a=5,b=10,c=22,s;
	s = ++a + b++ + c++ + ++c;
	// (a+1) + b + c + (c+1)
	//b+1
	//c+1+1
	
	printf("%d %d %d %d",s,a,b,c);
	return 0;
}
