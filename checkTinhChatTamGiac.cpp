#include<stdio.h>

int checkTamGiac(double a,double b,double c)
{
	if((a+b)>c&&(a+c)>b&&(b+c)>a&&a>0&&b>0&&c>0)
	{
		return 1;
	}
	return 0;
}

int checkTinhChat(double a, double b, double c)
{
    if( a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b)
    {
    	if(a==b||b==c||c==a)
    	{
    		return 0;   // neu tra ve 0 la tam giac vuong can
		}
		else 
		{
			return 1; // neu tra ve 1 tam giac vuong
		}	   
	}       
    else if(a==b&&b==c)
	{
		return 2;   // neu tra ve 2 la tam giac deu
	}
    else if(a==b || a==c || b==c)
    {
    	return 3;    // neu tra ve 3 la tam giac can
	}
    else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b) 
	{
		return 4;   // neu tra ve 4 la tam giac tu
    }   
    else
    {
    	return 5;   // la tam giac nhon
	}
}

int main()
{
	double a,b,c;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	if(checkTamGiac(a,b,c)==1)
	{
		if(checkTinhChat(a,b,c)==0)
		{
			printf("Tam giac vuong can");
		}
		else if(checkTinhChat(a,b,c)==1)
		{
			printf("Tam giac vuong");
		}
		else if(checkTinhChat(a,b,c)==2)
		{
			printf("Tam giac deu");
		}
		else if(checkTinhChat(a,b,c)==3)
		{
			printf("Tam giac can");
		}
		else if(checkTinhChat(a,b,c)==4)
		{
			printf("Tam giac tu");
		}
		else if(checkTinhChat(a,b,c)==5)
		{
			printf("Tam giac nhon");
	    }
	}
	else
	{
		printf("Ko phai tam giac");
	}
	return 0;
}


