#include<stdio.h>
#include<math.h>
#include<string.h>
long int change(char s[]);
int main()
{
	int t ,i ,m ,number ,length ;
	char str1[100] ,chx ;
	scanf("%d",&t);
	chx=getchar();
	for (i=1;i<=t;i++)
		{
			number=0;
			scanf("%s",str1);
			length=strlen(str1);
			for (m=0;str1[m]!='\0';m++)
				{
					if (str1[m]>='0'&&str1[m]<='9')
						{
							number+=(str1[m]-'0')*pow(16,length-m-1);
						}
					else if (str1[m]>='A'&&str1[m]<='Z')
						{
							number+=(str1[m]-'A'+10)*pow(16,length-m-1);
						}
				}
			printf("%d\n",number);
		}
	
}
