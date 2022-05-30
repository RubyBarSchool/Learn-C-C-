int checkTamGiac(double a,double b,double c)
{
	if((a+b)>c&&(a+c)>b&&(b+c)>a&&a>0&&b>0&&c>0)
	{
		return 1;
	}
	return 0;
}
