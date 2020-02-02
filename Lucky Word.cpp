#include<stdio.h>
#include<math.h>
int main()
{
	int T ,i ,m ,k ,number ,mnumber ,flag=0 ;
	char string[100] ,min ,max ,chx ;
	scanf("%d",&T);
	chx=getchar();
	for (i=1;i<=T;i++)
		{
			scanf("%s",string);
			for (k=0;string[k]!='\0';k++)
				{
					mnumber=0;
					if (string[k]=='~')
						continue;
						
					for (m=k+1;string[m]!='\0';m++)
						{
							
							if (string[m]==string[k])
								{
									mnumber++;
									string[m]='~';
								}
						}
						
					string[k]=mnumber+1+'0';
				}
				min=max=0;
			for (k=0;string[k]!='\0';k++)
				{
					if (string[k]=='~')
						continue;
					else
						{
							if (string[k]>string[max])
								{
									max=k;
								}
						}
				} 
			for (k=0;string[k]!='\0';k++)
				{
					if (string[k]=='~')
						continue;
					else
						{
							if (string[k]<string[min])
								{
									min=k;
								}
						}
				} 
			number=string[max]-string[min];
		
			if (number==1)
				{
					printf("No Answer\n0\n");
					continue;
				}
			else if (number==2)
				{
					printf("Lucky Word\n2\n");
					continue;
				}
			else 
				{
					for (m=2;m<=number-1;m++)
						{
							if (number%m==0)
								{
									flag=0;
									break;
								}	
							else
								{
									flag=1;
								}
						}
				}
			if (flag==1)
				{
					printf("Lucky Word\n%d\n",number);
				}
			else if (flag==0)
				{
					printf("No Answer\n0\n");
				}
		}
}
