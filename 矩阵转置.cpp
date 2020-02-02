#include<stdio.h>
int main()
{
	int dem[3][3];
	int i ,k ;
	for (i=0;i<=2;i++)
		{
			for (k=0;k<=2;k++)
				{
					scanf("%d",&dem[i][k]);
				}
		}
	for (i=0;i<=2;i++)
		{
			for (k=0;k<=2;k++)
				{
					printf(k==2?"%d \n":"%d ",dem[k][i]);
				}
		}
	printf("\n");
}
 
