#include<stdio.h>
#include<math.h>

float s1(int x,int n);
float s2(int x,int n); 
float s3(int x,int n);
float s4(int x,int n);
int main()
{
	int x,n;
	printf("Enter number X: ");
	scanf("%d",&x);
	printf("Enter number N: ");
	scanf("%d",&n);
	printf("S1 = %f\n",s1(x,n));
	printf("S2 = %f\n",s2(x,n));
	printf("S3 = %f\n",s3(x,n));
	printf("S4 = %f\n",s4(x,n));
}

float s1(int x,int n)
{
	float sum = 1;
	for(int i=1;i<=n;i++)
	{
		sum += pow(-1,i)/pow(x,i);
	}
	return sum;
}

float s2(int x,int n)
{
	float sum = 1;
	for(int i=1;i<=n;i++)
	{
		sum += i/pow(x,i);
    }
    return sum;
}

float s3(int x, int n)
{
	float sum = 1,tu;
	for(int i=1;i<=n;i++)
	{
		tu = i*(i+1);
		sum += tu/(i*pow(x,i));
	}
	return sum;
}

float s4(int x, int n)
{
	float sum = 1,a = 1,b=1;
	for(int i=1;i<=n;i++)
	{
		a=a*i;
		b=i+1;
		sum += a*pow(-1,b)/pow(x,i);
		b=0;
	}
	return sum;
}
