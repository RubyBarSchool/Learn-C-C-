#include<stdio.h>

int main()
{  	 	
	FILE *fl;
	fl = fopen("demo.txt","r");
	char string[50];
	char string1[30];
//	fputc('a',fl);
//	fputs("test may file lan 1\n",fl);
//	fprintf(fl,"test may file lan 2\n");
fgets(string,50,fl);
fgets(string1,30,fl);
   // fscanf(fl,"%s",&string);
    printf("%s",string);
        printf("%s",string1);

	fclose(fl);
}
