#include<stdio.h>
#include<string.h>


int main(int argc,char *argv[])
{
	char string[]="Xinchao";
	long doDaiChuoi = 0;
	// gia tri do dai chuoi se duoc luu trong bien doDaiChuoi
	doDaiChuoi=strlen(string);
	//hien thi do dai chuoi 
	printf("Chuoi %s co do dai %ld ki tu",string,doDaiChuoi);
	return 0;
}


//cach thu hien cua ham strlen;
//long doDaiChuoi(const char *string);
//
//int main(int argc,char *argv[])
//{
//	char string[]="Hello";
//	long doDai = 0;
//	doDai = doDaiChuoi(string);
//	printf("chuoi %s co do dai %ld ki tu",string,doDai);
//	return 0;
//}
//
//long doDaiChuoi(const char *string)
//{
//	long soLuongKiTu = 0;
//	char kiTuHienTai = 0;
//	do
//	{
//		kiTuHienTai = string[soLuongKiTu];
//		soLuongKiTu++;
//	}
//	while(kiTuHienTai!='\0');
//	soLuongKiTu--;
//	return soLuongKiTu;
//}
