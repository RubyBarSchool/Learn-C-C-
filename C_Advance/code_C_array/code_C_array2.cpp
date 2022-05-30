#include<stdio.h>
#include<stdlib.h>

void sapXepArray(int array[],int kichThuoc);

int main(int argc,char *argv[])
{
	int i;
	int a[9]={1,2,6,9,7,3,5,3,6};
	sapXepArray(a,9);
	for(int i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void sapXepArray(int array[],int kichThuoc)
{
	int i,stemp,j;
	for(i=0;i<kichThuoc;i++)
	{
		for(j=i+1;j<kichThuoc;j++)
		{
			if(array[i]>array[j])
			{
				stemp = array[i];
				array[i] = array[j];
				array[j] = stemp;
 			}
		}
	}
}
