#include<stdio.h>
#include<stdlib.h>

int main()
{
	// ham doi ten file
	rename("demo.txt","test_rename.txt");
	// ham xoa file
	remove("test_rename.txt");
}
