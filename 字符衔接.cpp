#include<stdio.h>
#include<string.h>
int main()
{
	int i ,t ,str1_length ,str2_length ,m ,n ;
	char chx ,str1[100] ,str2[100] ,newstr[10];
	scanf("%d",&t);
	chx=getchar();
	for (i=1;i<=t;i++)
		{
			scanf("%s",str1);
			scanf("%s",str2);
			str1_length=strlen(str1);
			str2_length=strlen(str2);
			for (m=0;m<=2;m++)
				{
					newstr[m]=str1[m];
				}
			for (m=3,n=str2_length-3;m<=5;n++,m++)
				{
					newstr[m]=str2[n];
				}
			newstr[6]='\0';
			printf("%s\n",newstr);
		}
}
