#include<stdio.h>
#include<stdlib.h>

// fgetc(ten File) doc 1 ki tu trong file
// fgets(ten chuoi,so ki tu toi da,ten file)
// fscanf(ten File,"dac ta cua so",luu tru)
#define SO_KY_TU_TOI_DA 1000
int main()
{
	FILE *taptin=NULL;
	int kyTuHienTai = 0;
	int tuoi[3];
	char chuoi[SO_KY_TU_TOI_DA];
	taptin = fopen("demo.txt","r");
	
	if(taptin!=NULL)
	{
		//vong lap lan luot doc tung ki tu
		
//		do
//		{
//			kyTuHienTai=fgetc(taptin);//doc ki tu 
//			printf("%c",kyTuHienTai);
//		}
//		while(kyTuHienTai!=EOF);

//        while(fgets(chuoi,SO_KY_TU_TOI_DA,taptin)!=NULL)
//        {
//        	printf("%s",chuoi);
//		}
        fscanf(taptin,"%d %d %d",&tuoi[0],&tuoi[1],&tuoi[2]);
        printf("%d",tuoi[0]);
		fclose(taptin);
	}
	return 0;
}
