#include<stdio.h>

typedef struct ToaDoDiem ToaDoDiem;
struct ToaDoDiem
{
	int x;
	int y;
};

void taoToaDoDiem(ToaDoDiem *diembatky)
{
	
    (*diembatky).x=0;
	scanf("%d",&(*diembatky).x);
    (*diembatky).y=0;
    scanf("%d",&(*diembatky).y);
}


int main()
{
	int nhap;
	int *p=&nhap;
	scanf("%d",&*p);
	ToaDoDiem diembatkyCuaToi;
	
	printf("%d",nhap);
	taoToaDoDiem(&diembatkyCuaToi);
	printf("%d %d",diembatkyCuaToi.x,diembatkyCuaToi.y);
	return 0;
}
