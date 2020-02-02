#include<stdio.h>
int main()
{
	int m ,n ;
	int t ,i ,k , j ,minm ,minn ;
	float number[100][100]  ;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
		{
			scanf("%d%d",&m,&n);
			for (j=0;j<=m-1;j++)
				for (k=0;k<=n-1;k++)
					{
						scanf("%f",&number[j][k]);
					}
			minm=minn=0;
			for (j=0;j<=m-1;j++)
				for (k=0;k<=n-1;k++)
					{
						if (number[j][k]<number[minm][minn])
							{
								minm=j;
								minn=k;
							}
					}
			printf("%.0f %d %d\n",number[minm][minn],minm+1,minn+1);
		}
}
