#include<stdio.h>
#include<string.h>
int main()
{
	char str1[200] ,str2[200] ,str3[200];
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str3);
	if (strcmp(str1,str2)>=0)
		{
			if (strcmp(str2,str3)>=0)
				{
					printf("%s\n",str3);
					printf("%s\n",str2);
					printf("%s\n",str1);
				}
			else if (strcmp(str3,str2)>=0)
				{
					printf("%s\n",str2);
					printf("%s\n",str3);
					printf("%s\n",str1);
				}
		}
	else if (strcmp(str3,str2)>=0)
		{
			if (strcmp(str2,str1)>=0)
				{
					printf("%s\n",str1);
					printf("%s\n",str2);
					printf("%s\n",str3);
				}
			else if (strcmp(str1,str2)>=0)
				{
					printf("%s\n",str2);
					printf("%s\n",str1);
					printf("%s\n",str3);
				}
		}
	else if (strcmp(str1,str3)>=0)
		{
			if (strcmp(str2,str3)>=0)
				{
					printf("%s\n",str3);
					printf("%s\n",str2);
					printf("%s\n",str1);
				}
			else if (strcmp(str3,str2)>=0)
				{
					printf("%s\n",str2);
					printf("%s\n",str3);
					printf("%s\n",str1);
				}
		}
}
 
