//计算数组元素和 

#include<stdio.h>

#define N 5

int main()
{
	int A[N] ;
	int sum ,i ,*p ;
	
	printf("input %d numbers:",N);
	for (i=0;i<N;i++)  //数组输入，数组指针 
		scanf("%d",A+i);
	for (sum=0,i=0;i<N;i++) //下标法 
		sum+=A[i];
	printf("sum= %d\n",sum);
	for (sum=0,i=0;i<N;i++)//数组指针 
		sum+=*(A+i);
	printf("smu =%d\n",sum);
	for (sum=0,i=0,p=A;i<N;i++)//指针变量 
		sum+=p[i];			//sum+=*(p+1) 
	printf("sum=%d\n",sum);
	
	for (sum=0,p=A+2;p<A+N;p++)//移动指针变量 ，计算下标为3后的和 
		sum+=*p;
	printf("sum=%d\n",sum);
}
