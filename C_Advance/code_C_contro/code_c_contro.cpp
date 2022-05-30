#include<stdio.h>
#include<stdlib.h>
/*int chuyenDoi(int gio, int phut);
int main(int argc,char*argv[])
{
	int gio = 0,phut = 90;
	chuyenDoi(gio,phut);
	printf("%d gio va %d phut",gio,phut);
	return 0;
}
int chuyenDoi(int gio,int phut)
{
	gio = phut/60;
	phut = phut% 60;
	return phut;
}
*/

/*int main()
{
	int tuoi = 10;
	int *pointerTuoi = &tuoi;
	// pointerTuoi = &tuoi;
	printf("%d",&tuoi);
	return 0;
}
*/


/*void triplePointer(int *pointerSoHang);

int main(int argc,char*argv[])
{
	int soHang = 5;
	
	triplePointer(&soHang);
	printf("%d",soHang);
	
	return 0;
}

void triplePointer(int *pointerSoHang)
{
	*pointerSoHang*=3;
}
*/


void chuyenDoi(int *pointerGio,int *pointerPhut);
int main(int argc,char *argv[])
{
	int gio = 0, phut = 90;
	// ta dua dia chi cua gio va phut
	chuyenDoi(&gio,&phut);
	//luc nay, gia tri cua chung ta da duoc thay doi !
	printf("%dgio va %dphut",gio,phut);
	return 0;
}

void chuyenDoi(int *pointerGio,int *pointerPhut)
{
	/*dung quen dau * o phia truoc con tro! bang cach nay ban co the thay doi gia tri cua bien so chu khong phai dia chi cua no!
	Han la ban khong muon chia dia chi cua no dung khong?
	*/
	*pointerGio = *pointerPhut/60;
	*pointerPhut = *pointerPhut%60;
}


