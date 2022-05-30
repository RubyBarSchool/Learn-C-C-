void xoakitu(char string[],char a)
{
	int i=0;
	do
	{
		if(string[i]==a)
		{
			do
			{
				string[i]=string[i+1];
				i+=1;	
			}
			while(string[i]!='\0');
			i=-1;
		}	
		i++;
	}
	while(string[i]!='\0');
}
