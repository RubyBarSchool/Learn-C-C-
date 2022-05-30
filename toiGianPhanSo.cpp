#include<stdio.h>



void toiGianPhanSo(int &tuSo,int &mauSo)
{
	int i;
	if(tuSo==mauSo)
	{
		tuSo=1;
		mauSo=1;
	}
	else if(tuSo>mauSo)
	{
		for(i=2;i<=mauSo;i++)
		{
			if(tuSo%i==0&&mauSo%i==0)
			{
				tuSo=tuSo/i;
				mauSo=mauSo/i;
				i=1;
			}
		}
	}
	else
	{
		for(i=2;i<=tuSo;i++)
		{
			if(tuSo%i==0&&mauSo%i==0)
			{
				tuSo=tuSo/i;
				mauSo=mauSo/i;
				i=1;
			}
		}
	}
}

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	toiGianPhanSo(a,b);
	printf("Phan so toi gian la: a/b = %d/%d",a,b);
}
