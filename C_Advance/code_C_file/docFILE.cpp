#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *taptin=NULL;
	int kyTuHienTai = 0;
	taptin = fopen("demo.txt","r");
	if(taptin!=NULL)
	{
		//vong lap lan luot doc tung ki tu
		
		do
		{
			kyTuHienTai=fgetc(taptin);//doc ki tu 
			printf("%c",kyTuHienTai);
		}
		while(kyTuHienTai!=EOF);
		fclose(taptin);
	}
	return 0;
}
