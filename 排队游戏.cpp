#include<stdio.h>
#include<string.h>
int main()
{
	char string[200] ;
	int i ,m ,k ,number[200] ,length ,times=0;
	scanf("%s",string);
	length=strlen(string);
	for (i=0;i<=length-1;i++)
		{
			number[i]=i;
		}
	if (string[0]=='(')
		for (i=0;string[i+1]!='\0';i++)
			{
				if (string[i]=='('&&string[i+1]==')')
					{
						printf("%d %d\n",number[i],number[i+1]);
						times++;
						m=i;
						
						while(string[m+2]!='\0')
							{
								string[m]=string[m+2];
								number[m]=number[m+2];
								m++;
							}
						
						
							
								i-=2;
								string[m+1]='\0';
							if (times==length/2)
								{
									break;
								}
							
						
					}
			}
	else if (string[0]==')')
		for (i=0;string[i+1]!='\0';i++)
				{
					if (string[i]==')'&&string[i+1]=='(')
						{
							printf("%d %d\n",number[i],number[i+1]);
							m=i;
							while(string[m+2]!='\0')
								{
									string[m]=string[m+2];
									number[m]=number[m+2];
									m++;
								}
							string[m]='\0';
							i-=2;
						}
				}
			
}
