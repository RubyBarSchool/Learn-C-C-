#include<stdlib.h>
#include<stdio.h>

struct sinhVien
{
	char ten[100];
	int tuoi;
	int diem;
};

int main()
{
	sinhVien sv;
	printf("Nhap ten sinh vien do: \n");
	gets(sv.ten);
	printf("Nhap tuoi cua sinh vien do: \n");
	scanf("%d",&sv.tuoi);
	printf("Nhap diem cho sinh vien do: \n");
	scanf("%d",&sv.diem);
	fflush(stdin);
	printf("%s\n",sv.ten);
	printf("%d\n",sv.tuoi);
	printf("%d\n",sv.diem);
}
