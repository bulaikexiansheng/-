//��������Ԫ�غ� 

#include<stdio.h>

#define N 5

int main()
{
	int A[N] ;
	int sum ,i ,*p ;
	
	printf("input %d numbers:",N);
	for (i=0;i<N;i++)  //�������룬����ָ�� 
		scanf("%d",A+i);
	for (sum=0,i=0;i<N;i++) //�±귨 
		sum+=A[i];
	printf("sum= %d\n",sum);
	for (sum=0,i=0;i<N;i++)//����ָ�� 
		sum+=*(A+i);
	printf("smu =%d\n",sum);
	for (sum=0,i=0,p=A;i<N;i++)//ָ����� 
		sum+=p[i];			//sum+=*(p+1) 
	printf("sum=%d\n",sum);
	
	for (sum=0,p=A+2;p<A+N;p++)//�ƶ�ָ����� �������±�Ϊ3��ĺ� 
		sum+=*p;
	printf("sum=%d\n",sum);
}
