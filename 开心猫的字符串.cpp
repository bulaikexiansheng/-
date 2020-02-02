#include<stdio.h>
int main()
{
	char string[200] ;
	int i ;
	while((string[i]=getchar())!=EOF)
		{
			i++;
		}
	string[i]='\0';
	for (i=0;string[i+2]!='\0';i++)
		{
			if (string[i]=='s'&&string[i+1]=='z'&&string[i+2]=='u')
				{
					string[i]='S';
					string[i+1]='Z';
					string[i+2]='U';
				}
		}
	printf("%s\n",string);
	
}
