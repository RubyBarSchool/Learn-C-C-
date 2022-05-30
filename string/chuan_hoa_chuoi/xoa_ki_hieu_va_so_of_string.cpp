void xoakihieu(char *string)
{
	int i=0;
	int a;
	do
	{
		a = string[i];
		if((33 <= a && a <= 64) || (92 <= a && a <= 96) || (123 <= a && a<=126) )
		{
			do
			{
				string[i]=string[i+1];
				i++;
			}
			while(string[i]!='\0');
			i=-1;
		}
		i++;
	}
	while(string[i]!='\0');
}

