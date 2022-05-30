#include<stdio.h>

void demKiTuThuongHoaSo(char string[],int *kiTuThuong,int *kiTuHoa,int *so)
{
	int i=0;
	int chuyenString=0;
	do
	{
		chuyenString = string[i];
		if(chuyenString>=65&&chuyenString<=90)
		{
			(*kiTuHoa)++;
		}
		else if(chuyenString>=97&&chuyenString<=122)
		{
			(*kiTuThuong)++;
		}
		else if(chuyenString>=48&&chuyenString<=57)
		{
			(*so)++;
		}
		i++;
	}
	while(string[i]!='\0');
}
