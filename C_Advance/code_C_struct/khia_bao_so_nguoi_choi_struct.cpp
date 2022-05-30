#include<stdio.h>
typedef struct TaiKhoan TaiKhoan;
struct TaiKhoan
{
	char ten[100];
	char ho[100];
	char diachi[100];
	int tuoi;
	char sodienthoai[100];
};

int main()
{
	int i;
	FILE *fl;
	fl = fopen("sinhvien.txt","w");
	
	TaiKhoan nguoidung[2];
	for(i=0;i<2;i++)
	{
		printf("Ten nguoi choi %d la: ",i+1);
		scanf("%[^\n]",nguoidung[i].ten);
		fflush(stdin);
		printf("Ho nguoi choi %d la: ",i+1);
		scanf("%[^\n]",nguoidung[i].ho);
		fflush(stdin);
		printf("Dia chi nguoi choi %d la: ",i+1);
		scanf("%[^\n]",nguoidung[i].diachi);
		fflush(stdin);
		printf("Tuoi cua nguoi choi %d la: ",i+1);
		scanf("%d",&nguoidung[i].tuoi);
		fflush(stdin);
		printf("So dien thoai cua nguoi choi %d la: ",i+1);
		scanf("%[^\n]",nguoidung[i].sodienthoai);
		fprintf(fl,TaiKhoan,nguoidung[i]);
		fflush(stdin);
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		printf("Ten nguoi choi %d la: %s\n ",i+1,nguoidung[i].ten);
		printf("Ho nguoi choi %d la: %s \n",i+1,nguoidung[i].ho);
		printf("Dia chi nguoi choi %d la: %s\n ",i+1,nguoidung[i].diachi);
		printf("Tuoi cua nguoi choi %d la: %d\n ",i+1,nguoidung[i].tuoi);
		printf("So dien thoai cua nguoi choi %d la: %s\n\n\n\n\n ",i+1,nguoidung[i].sodienthoai);
	}
	return 0;
}
