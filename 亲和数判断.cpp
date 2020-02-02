#include<stdio.h>
#include<math.h>
int judge(int m,int n);
int main()
{
	int t ,num1 ,num2 ,i ,result;
	scanf("%d",&t);
	for (i=1;i<=t;i++)
		{
			scanf("%d%d",&num1,&num2);
			if (num1==num2)
				{
					printf("NO\n");
					continue;
				}
			result=judge(num1,num2);
			if (result==1)
				{
					printf("YES\n");
				}
			else if (result==0)
				{
					printf("NO\n");
				}
		}
}

int judge(int m,int n)
{
	int i ,sum1=1 ,sum2=1 ;
	for (i=2;i<=m-1;i++)
		{
			if (m%i==0)
				{
					sum1+=i;
				}
		}
	if (sum1!=n)
		return 0;
	for (i=2;i<=n-1;i++)
		{
			if (n%i==0)
				{
					sum2+=i;
				}
		}
	if (sum2!=m)
		return 0;
	else
		return 1;
}
