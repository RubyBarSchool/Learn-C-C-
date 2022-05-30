#include<stdio.h>
#include<string.h>

/*prototype cua strcpy
char* strcpy(char* copyString,const char* stringCopy);
*/

int main(int argc,char *argv[])
{
	/*chung ta khai bao bien "string"kieu char trong do co chua 1 chuoi ki tu 
	va mot bien "copy" voi kich thuoc 100 ky tu de ao dam co du cho trong */
	char string[]="Text",copy[100]={0};
	
	strcpy(copy,string);//chung ta se sao chep nhung ki tu tu "string" sang "copy"
	//neu khong co gi sai sot thi "copy" bay gio se giong nhu "string"
	printf("%s\n",string);
	printf("%s",copy);
	return 0;
}
