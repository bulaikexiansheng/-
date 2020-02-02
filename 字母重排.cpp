#include<stdio.h>
int main()
{
	char string1[101] ,string2[101] ,ch ;
	int i  ,m ;
	scanf("%s",string1);
	for (i=0,m=0;string1[i]!='\0';i++)
		{
			if (string1[i]<='z'&&string1[i]>='a')
				{
					string2[m]=string1[i];
					m++;
				}
		}
	string2[m]='\0';
	for (i=0;string2[i+1]!='\0';i++)
		for (m=i+1;string2[m]!='\0';m++)
			{
				if (string2[i]>=string2[m])
					{
						ch=string2[i];
						string2[i]=string2[m];
						string2[m]=ch;
					}
			}
	printf("%s\n",string2);
	
}
