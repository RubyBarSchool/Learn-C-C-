#include<stdio.h>
#include<stdlib.h>

void maximumArray(int array[],int kichThuoc,int giaTriMax);

int main()
{
	int a[9]={1,5,7,8,5,2,3,7,9};
	maximumArray(a,9,5);
	return 0;
}

void maximumArray(int array[],int kichThuoc,int giaTriMax)
{
	int i;
	for(i=0;i<kichThuoc;i++)
	{
		if(array[i]>giaTriMax)
		{
			array[i] = 0;
		}
	}
	for(i=0;i<kichThuoc;i++)
	{
		printf("%d ",array[i]);
	}
}
