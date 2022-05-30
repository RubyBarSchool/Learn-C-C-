#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int soluongBanbe = 0,i = 0;
	int *tuoiBanbe = NULL; //con tro nay se duoc su dung nhu mot mang sau khi dung malloc
	
	// chung ta se yeu cau nguoi dung cho biet so luong ban be cua ho
	
	printf("Ban co bao nhieu nguoi ban?");
	scanf("%d",&soluongBanbe);
	if(soluongBanbe>0)
	{
		tuoiBanbe=(int*)malloc(soluongBanbe*sizeof(int)); // phan bo bo nho cho mang
		if(tuoiBanbe==NULL)
		{
			exit(0);    // chuong trinh dung ngay lap tuc
		}
		
		// yeu cau nhap tuoi tung nguoi ban
		for(i=0;i<soluongBanbe;i++)
		{
			printf("Nguoi ban thu %d bao nhieu tuoi?",i+1);
			scanf("%d",&tuoiBanbe[i]);
		}
		// lan luot in ra so tuoi cua tung ban
		printf("\n\nTuoi cua ban be ban la:\n");
		for(i=0;i<soluongBanbe;i++)
		{
			printf("%d tuoi\n",tuoiBanbe[i]);
		}
		
		//giai phong bo nho da duoc cap phat cho mang boi malloc,no khong con can thiet nua
		free(tuoiBanbe);
	}
	
	return 0;
	
}
