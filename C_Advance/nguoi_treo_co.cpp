#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void anTuBiAn(char *string,char *string1)
{
	for(int i=0;i<strlen(string);i++)
	{
		string1[i]='*';
	}
}
void xuatHienTuDung(char *string2,char *string3,char x,int *a)
{
	int k=0;
	for(int i=0;i<strlen(string2);i++)
	{
		if(string2[i]==x)
		{
			string3[i]=x;
			k++;
		}
	}
	if(k!=0)
	{
		(*a)+=1;
	}
}
int kiemTraTuDung(char *string4)
{
	int k=0;
	for(int i=0;i<strlen(string4);i++)
	{
		if(string4[i]=='*')
		{
		   k++;
		}
	}
	if(k==0)
	{
		return 1;
	}
	return 0;
}
int chonTuNgauNhien(int a)
{
	srand(time(NULL));
	return (rand()%a);
}
int chonTu(char *tuDuocChon)
{
	char luuKiTu;
	int soLuongKiTu=0;
	FILE *taptin=NULL;
	taptin = fopen("nguoitreoco.txt","r");
	do
	{
		luuKiTu=fgetc(taptin);
		if(luuKiTu=='\n')
		{
			soLuongKiTu++;
		}
	}
	while(luuKiTu!=EOF);
	int viTriTuDuocChonLa;
	viTriTuDuocChonLa=chonTuNgauNhien(soLuongKiTu);
	rewind(taptin);
	while(viTriTuDuocChonLa>0)
	{
		luuKiTu=fgetc(taptin);
		if(luuKiTu=='\n')
		{
			viTriTuDuocChonLa--;
		}
	}
	fgets(tuDuocChon,100,taptin);
	tuDuocChon[strlen(tuDuocChon)-1]='\0';
	fclose(taptin);
	return 1;
}

int main()
{	char *tuBiMat=NULL;
	char *tuXuatHien=NULL;
	char a;
	int soLuotChoi;
	tuBiMat=(char*)malloc(50*sizeof(char));
	chonTu(tuBiMat);
	tuBiMat=(char*)malloc(strlen(tuBiMat)*sizeof(char));
	tuXuatHien=(char*)malloc(strlen(tuBiMat)*sizeof(char));
	soLuotChoi=strlen(tuBiMat);
	anTuBiAn(tuBiMat,tuXuatHien);
	do
	{
		printf("Ban co so luot doan la: %d\n",soLuotChoi);
		printf("Tu bi an la: ");
		printf("%s",tuXuatHien);
		printf("\nHay doan 1 chu cai co trong tu(viet hoa): ");
		scanf("%c",&a);
		fflush(stdin);
		xuatHienTuDung(tuBiMat,tuXuatHien,a,&soLuotChoi);
		if(kiemTraTuDung(tuXuatHien)==1)
		{
			printf("Chuc mung ban da doan dung tu: %s",tuXuatHien);
			break;
		}
		soLuotChoi-=1;
	}
	while(soLuotChoi!=0);
	if(soLuotChoi==0)
	{
		printf("\n\nBan da thua cuoc. Hen ban lan sau");
	}
	return 0;
}
