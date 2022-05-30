#include<stdio.h>
#include<string.h>
void daoNguocChuoi(char a[],char b[],int viTriDau,int viTriCuoi);
int main()
{
	char string[100];
	char string1[100];
	int viTriDau,ViTriCuoi,i;
	gets(string);
	for(i=0;i<2;i++)  // dao 2 khoang thi dung for con dao 1 khoang thi khong can for
	{
	printf("Nhap vi tri dau");
	scanf("%d",&viTriDau);
	printf("Nhap vi tri cuoi");
	scanf("%d",&ViTriCuoi);
	daoNguocChuoi(string,string1,viTriDau,ViTriCuoi);
	}
	puts(string);
}
void daoNguocChuoi(char a[],char b[],int viTriDau,int viTriCuoi)
{
	int i;
	int j=0;
	for(i=viTriCuoi;i>=viTriDau;i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	j=0;
	for(i=viTriDau;i<=viTriCuoi;i++)
	{
		a[i]=b[j];
		j++;
	}
}
