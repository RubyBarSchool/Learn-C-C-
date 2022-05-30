#include<stdio.h>
#include<math.h>

typedef struct Toadodiem Toadodiem;
struct Toadodiem
{
	int x;// hoanh do diem
	int y;// tung do diem
};
typedef struct Taikhoan Taikhoan;
struct Taikhoan
{
	char ten[100];
	char ho[100];
	char diachi[100];
	
	int tuoi;
	int gioitinh;
	
};
int main()
{
	Toadodiem diemBatKy;
	diemBatKy.x = 10;
	diemBatKy.y = 20;
	Taikhoan nguoidung;
	printf("Ten ban la j ?\n");
	scanf("%s",nguoidung.ten);
	printf("Ho cua ban la j ?\n");
	scanf("%s",nguoidung.ho);
	printf("Ho va ten day du cua ban la %s %s ",nguoidung.ho,nguoidung.ten);
	return 0;
}
