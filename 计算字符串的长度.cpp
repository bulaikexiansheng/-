#include<stdio.h>
int strlen(char string[]);
int main()
{
	int t ,i ,length ;
	char string[100] ,chx ;
	scanf("%d",&t);
	chx=getchar();
	for (i=1;i<=t;i++)
		{
			scanf("%s",string);
			length=strlen(string);
			printf("%d\n",length);
		}
} 

int strlen(char string[])
{
	int i ,length=0 ;
	for (i=0;string[i]!='\0';i++)
		{
			length++;
		}
	return length ;
}
