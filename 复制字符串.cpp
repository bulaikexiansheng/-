#include<stdio.h>
void strcpy(char str1[],char str2[]);
int main()
{
	int t ,i ;
	char str1[100] ,str2[100] ,chx ;
	scanf("%d",&t);
	chx=getchar();
	for (i=1;i<=t;i++)
		{
			scanf("%s",str1);
			scanf("%s",str2);
			strcpy(str1,str2);
			printf("%s\n",str1);
		}
}
void strcpy(char str1[],char str2[])
{
	int i ;
	for (i=0;str2[i]!='\0';i++)
		{
			str1[i]=str2[i];
		}
	str1[i]='\0';
}
