#include<stdio.h>
#include<string.h>
int main()
{
	char str[100][100] ,number[100]={0} ,chx ,string[100] ;
	int i=0 ,t ,middle ;
	while (1)
		{
			gets(str[i]) ;
 
			number[i]++ ;
			if (strcmp(str[i],"0")==0)
				{
					break ;
				}
			for (t=0;t<i;t++)
				{
					if (strcmp(str[i],str[t])==0)
						{
							number[t]++ ;
							number[i]-- ;
							i-- ;
						}
				}
			i++ ;
		}
	for (i=0;strcmp(str[i+1],"0")!=0;i++)
		{
			for (t=i+1;strcmp(str[t],"0")!=0;t++)
				{
					if (number[t]>number[i])
						{
							middle=number[t];
							number[t]=number[i];
							number[i]=middle;
							strcpy(string,str[i]);
							strcpy(str[i],str[t]);
							strcpy(str[t],string);
						}
				}
		}
	for (i=0;strcmp(str[i],"0")!=0;i++)
		{
			printf("%d %s\n",number[i],str[i]);
		}
	return 0;
}
