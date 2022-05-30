#include<stdio.h>

//int main(int argc,char *argv[])
//{
//	char string[]="Hello";
//	printf("%s",string);
//	return 0;
//}

int main(int argc,char *argv[])
{
	char ten[100];
	printf("E ku, may ten gi vay? ");
//	scanf("%s",ten);
	gets(ten);
	printf("Hello %c, tao rat vui vi duoc gap m!",ten[14]);
	return 0;
}
