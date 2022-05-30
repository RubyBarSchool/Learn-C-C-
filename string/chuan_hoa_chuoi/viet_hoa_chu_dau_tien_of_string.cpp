void chuyendoi(char *string)
{
	int i=0;
	int a;
	do
	{
		a = string[i];
		if(i==0 &&string[i]!=' ' && 97<=a && a<=122 )
		{
			a-=32;
			string[i]=a;
		}
		else if(string[i]!=' ' && string[i-1]==' ' && 97<=a && a<=122 )
		{
			a-=32;
			string[i]=a;
		}
		i++;
	}
	while(string[i]!='\0');
}
