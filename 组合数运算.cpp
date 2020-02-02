#include<stdio.h>
int group(int m,int n);
int main()
{
	int t ,i ,m ,n ,result ;
	scanf("%d",&t);
	for (i=1;i<=t;i++)
		{
			scanf("%d%d",&m,&n);
			result=group(m,n);
			printf("%d\n",result);
		}
	return 0;
}

int group(int m,int n)
{
	int num1 ,num2 ,num3;
	int result ,i ;
	num1=num2=num3=1;
	for (i=1;i<=m;i++)
		{
			num1*=i;
		}
	for (i=1;i<=n;i++)
		{
			num2*=i;
		}
	for (i=1;i<=m-n;i++)
		{
			num3*=i;
		}
	result=num1/(num2*num3);
	return result;
}
