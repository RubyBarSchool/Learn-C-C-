#include<stdio.h>
#include<stdlib.h>

//void chuyenDoi(int gio,int phut);
//
//int main(int argc,char *argv[])
//{
//	int gio = 0,phut = 90;
//	int *pointer = &gio;
//	printf("gio = %d",pointer);
//	return 0;
//}

void triplePointer(int *pointerSoHang);

int main(int argc,char *argv[])
{
	int soHang = 5;
	triplePointer(&soHang);
	printf("%d",soHang);
	return 0;
}

void triplePointer(int *pointerSoHang)
{
	*pointerSoHang *=3;
}
