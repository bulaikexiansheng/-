#include<stdio.h>
void common(char str1[],char str2[]);
int main()
{
	char str1[100] ,str2[100] ;
	char chx ;
	scanf("%s",str1);
	chx=getchar();
	scanf("%s",str2);
	common(str1,str2);
	return 0;
}

void common(char str1[],char str2[])
{
	int m ,n ;
	for (m=0;str1[m]!='\0';m++)
		{
			for (n=0;str2[n]!='\0';n++)
				{
					if (str1[n]==str2[m])
						{
							n++;
			
						}
				}
		}
}
