#include<stdio.h>

int main(int argc,char *argv[])
{
	char string[6];  //mang string gom 6 char de luu tru H-e-l-l-o va \0
	//khoi tao chuoi ki tu (Ta viet tung ki tu vao bo nho)
	string[0]='H';
	string[1]='e';
	string[2]='l';
	string[3]='l';
	string[4]='o';
	string[5]='\0';
	// hien thi chuoi ky tu bang printf nho %s
	printf("%s",string);
	return 0;
}
