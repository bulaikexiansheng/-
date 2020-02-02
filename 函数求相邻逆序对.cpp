#include<stdio.h>
int  foundreverse(char str[],char str2[]);
int main()
{
	int t ,i ,m ,n ;
	char str[100] ,str2[100] ,number ,chx ;
	scanf("%d",&t);
	chx=getchar();
	for (i=1;i<=t;i++)
		{
			m=1;
			n=0;
			scanf("%s",str);
			number=foundreverse(str,str2);
			printf("%d\n",number);
			while(n<=number*2-1)
				{	
					if (n%2==0)
						printf("%c ",str2[n]);
					else
						printf("%c\n",str2[n]);
					n++;
				}
			
		}
	
}

int  foundreverse(char str[],char str2[])
{
	int i ,number=0 ,m=0 ;
	for (i=0;str[i+1]!='\0';i++)
		{
			if (str[i]>str[i+1])
				{
					number++;
					str2[m]=str[i];
					str2[m+1]=str[i+1];
					m+=2;
				}
		}
	return number;
}
