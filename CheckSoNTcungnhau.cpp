#include<stdio.h>

int checkSoNguyenToCungNhau(int a,int b)
{
	int c=1;
	if(a<=0||b<=0)
	{
		return 0;
	}
	if(a==1||b==1)
	{
		return 1;
	}
	else
	{
		if(a==b)
		{
			return 0;
		}
		else if(a>b)
		{
			while(c>0)
			{
				c=a%b;
				a=b;
				b=c;
			}
			if(a==1)
	        {
	    	    return 1;
		    }
		    else 
		    {
			    return 0;
		    }
		}
	    else
	    {
	    	while(c>0)
	    	{
	    		c=b%a;
	    		b=a;
	    		a=c;
			}
			if(b==1)
	        {
	    	    return 1;
		    }
		    else 
		    {
			    return 0;
		    }
		}
	}
	
}

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(checkSoNguyenToCungNhau(a,b)==1)
	{
		printf("soNguyenToCungNhau");
	}
	else 
	{
		printf("sai");
	}
	return 0;
}
