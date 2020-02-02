#include<stdio.h>
#include<string.h>
int huiwenjudge(char str[]);
int main()
{
	int t ,i ,result ;
	char str[1000] ,chx ;
	scanf("%d",&t);
	scanf("%c",&chx);
	for (i=1;i<=t;i++)
		{
			scanf("%s",str);
			result=huiwenjudge(str);
			if (result==1)
				{
					printf("Yes\n");
				}
			else if (result==0)
				{
					printf("No\n");
				}
		}
	return 0;
}

int huiwenjudge(char str[])
{
	int length ;
	int m ,n ;
	length=strlen(str);
	if (length==1)
		{
			return 1;
		}
	else if (length==2)
		{
			if (str[0]==str[1])
				{
					return 1;	
				} 
			else	
				{
					return 0;
				} 
		} 
	else
		{
			if (length%2==0)
				{
					for (m=0;m<=length/2-1;m++)
						for (n=length-1-m;n>length/2;n--)
							{
								if (str[m]==str[n])
									{
										continue;
									}	
								else 
									{
										return 0;
									}
							}
				}
			else
				{
					for (m=0;m<length/2;m++)
						for (n=length-1-m;n>length/2;n--)
							{
								if (str[m]==str[n])
									{
										break;
									}	
								else 
									{
										return 0;
									}
							}	
				}
				return 1;
		}
}
