#include<stdio.h>
int judge(int m,int n);
int main()
{
	int x ,i ,result ,number=0 ,m ,n ;
	scanf("%d",&x);
	for (i=2;i<=x/2;i++)
		{
			m=i;
			n=x-m;
			result=judge(m,n);
			if (result==1)
				{
					number++;
				}
		}
	printf("%d\n",number);
}

int judge(int m,int n)
{
	int j ;
	int flag1=0,flag2=0;
	if ((m==3||m==2)&&(n==3||n==2))
		return 1;
	else
	{
		for (j=2;j<=m/2;j++)
			{
				if (m%j==0)
					return 0;
			}
		for (j=2;j<=n/2;j++)
			{
				if (n%j==0)
					return 0;
			}
		return 1;
	}
}
