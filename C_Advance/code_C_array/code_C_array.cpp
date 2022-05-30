#include<stdio.h>
#include<stdlib.h>

int tongArray(int array[],int kichThuocArray);


int main()
{
	
	int a[9]={1,2,3,4,5,6,7,8,9};
	
	printf("%d",tongArray(a,9));
	
}

int tongArray(int array[],int kichThuocArray)
{
	int i,sum=0;
	for(i=0;i<kichThuocArray;i++)
	{
		sum += array[i];
	}
	return sum;
}
