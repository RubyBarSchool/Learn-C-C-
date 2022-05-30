#include<stdio.h>

void chuyenKiTuThuongThanhHoa(char string[])
{
	int chuyenString,i=0;
	do
	{
		chuyenString = string[i];
		if(chuyenString>=97&&chuyenString<=122)
		{
			chuyenString-=32;
			string[i] = chuyenString;
		}
		i++;
	}
    while(string[i]!='\0');
}
