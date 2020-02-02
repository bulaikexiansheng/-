#include<stdio.h>
void move(int number[],int m,int n);
int main()
{
	int m ,n ,i ;
	int number[100] ;
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
		{
			scanf("%d",&number[i]);
		}
	scanf("%d",&m);
	move(number,m,n);
	for (i=0;i<=n-1;i++)
		{
			printf("%d ",number[i]);
		}
	printf("\n");
}
void move(int number[],int m,int n)
{
	int moved[100];
	int i ,k ;
	for (i=0;i<=n-1;i++)
		{
			moved[i]=number[i];
		}
	for (i=0,k=m;k<=n-1;i++,k++)
		{
			number[k]=moved[i];
		}
	k=0;
	while(m!=0)
		{
			number[k]=moved[n-m];
			k++;
			m--;
		}
	
}
