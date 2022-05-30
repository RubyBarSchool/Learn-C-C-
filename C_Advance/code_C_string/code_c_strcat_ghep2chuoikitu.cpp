#include<stdio.h>
#include<string.h>

// ghep noi 2 chuoi

//char *strcat(char *string1,const char *string2);


int main(int argc,char *argv[])
{
	/*chung ta se tao ra 2 mang ki tu,nho rang string1 phai du lon de chua duoc
	nhung ki tu cua string2. Neu khong chuong trinh se bao loi.*/
	
	char string1[100]="Hello",string2[]="GoodBye";
	strcat(string1,string2);//Nhung ki tu cua string2 se duoc noi tiep vao string1
	//Neu moi thu dien ra tot dep thi ket qua cua string1 se la"HelloGoodBye"
	printf("string1 is: %s\n",string1);
	//string2 van khong bi thay doi
	printf("string2 is: %s",string2);
	return 0;
}
