#include<stdio.h>
int feibonaqi(int n);
int main()
{
	int n ,result ;
	scanf("%d",&n);
	result=feibonaqi(n);
	printf("%d\n",result); 
}

int feibonaqi(int n)
{
	int number[1000];
	int i ;
	number[0]=0;
	number[1]=1;
	for (i=0;i<=n-2;i++)
		{
			number[i+2]=number[i+1]+number[i];
		}
	return number[n];
}
