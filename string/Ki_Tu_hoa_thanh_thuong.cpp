#include<stdio.h>

void chuyenKiTuHoaThanhThuong(char string[])
{
	int chuyenString,i=0;
	do
	{
		chuyenString = string[i];
		if(chuyenString>=65&&chuyenString<=90)
		{
			chuyenString+=32;
			string[i] = chuyenString;
		}
		i++;
	}
	while(string[i]!='\0');
}

