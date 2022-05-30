void xoadaucach(char *string)
{
	int i=0;
	do
	{
		if(i==0 && string[i]==' ')
		{
			do
			{
				string[i]=string[i+1];
				i++;
			}
			while(string[i]!='\0');
			i=-1;
		}
		else if(string[i]==' '&&string[i+1]==' ')
		{
			do
			{
				string[i]=string[i+1];
				i++;
			}
			while(string[i]!='\0');
			i=0;
		}
		i++;
	}while(string[i]!='\0');
}
