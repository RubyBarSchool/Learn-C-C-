#include<stdio.h>
#include<stdlib.h>

void chuyenDoi(int *pointerGio,int *pointerPhut);

int main(int argc,char *argv[])
{
	int gio = 0,phut = 90;
	int *p = &gio;
	int *q = &phut;
	chuyenDoi(&gio,&phut);
	printf("%d gio va %d phut",*p,*q);
	return 0;
}

void chuyenDoi(int *pointerGio,int *pointerPhut)
{
	*pointerGio = *pointerPhut / 60;
	*pointerPhut = *pointerPhut % 60;
}

