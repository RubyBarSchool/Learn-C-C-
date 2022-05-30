void locKiTu(char s[],char s1[])
{
	int i=0,j=0,a=0,b=0,count=0;
	s1[b]=s[a];
	s1[b+1]='\0';
	do
	{
		a++;
		count=0;
		i=a;
		j=0;
		do
		{
			if(s1[j]==s[i])
			{
				count++;
			}
			j++;
		}
		while(j<strlen(s1));
		if(count==0)
		{
			s1[j]=s[i];
		}
		s1[j+1]='\0';
	}
	while(s[i]!='\0');
}
