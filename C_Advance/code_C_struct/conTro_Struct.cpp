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
	sinhVien *p = &sv;
	printf("Ban hay nhap ten cho sinh vien\n");
	gets(p->ten);
	printf("Ban hay nhap tuoi cho sinh vien\n");
	scanf("%d",&p->tuoi);
	printf("Ban hay nhap diem cho sinh vien\n");
	scanf("%d",&p->diem);
	printf("Thong tin sinh vien ban vua nhap la: \n");
	printf("Ten cua sinh vien la:     %s\n",p->ten);
	printf("Tuoi cua sinh vien la:    %d\n",p->tuoi);
	printf("Diem cua sinh vien la:    %d\n",p->diem);
	return 0;
}
