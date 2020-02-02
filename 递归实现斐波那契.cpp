#include<stdio.h>
int feibonaqi(int n);
int main()
{
	int n ,times ,i ,result ;
	scanf("%d",&times);
	for (i=1;i<=times;i++)
		{
			scanf("%d",&n);
			result=feibonaqi(n);
			printf("%d\n",result);
		}
	
	return 0;
	
}

int feibonaqi(int n)
{
	if (n==1)
		return 1;
	else if (n==2)
		return 1;
	else
		{
			return feibonaqi(n-1)+feibonaqi(n-2);
		}
}
