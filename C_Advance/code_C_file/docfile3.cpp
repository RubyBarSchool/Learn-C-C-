#include<stdio.h>
#define SO_KI_TU_TOI_DA 1000
int main()
{
	FILE *fl;
	fl = fopen("demo.txt","r");
	char chuoi[SO_KI_TU_TOI_DA];
	int kiTuHienTai=0;
	int a[3];
	if(fl!=NULL)
	{
		fscanf(fl,"%d %d %d",&a[1],&a[2],&a[3]);
		printf("%d %d %d",a[1],a[2],a[3]);
//		while(fgets(chuoi,SO_KI_TU_TOI_DA,fl)!=NULL)
//		{
//			printf("%s",chuoi);
//		}
		//fgets(chuoi,SO_KI_TU_TOI_DA,fl);
		
//		do
//		{
//			kiTuHienTai=fgetc(fl);
//			printf("%c",kiTuHienTai);
//			
//		}
//		while(kiTuHienTai!='\n');
		fclose(fl);
	}
}
