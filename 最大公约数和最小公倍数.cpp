#include<stdio.h>
int num_max(int number1,int number2);
int num_min(int number1,int number2);
int main()
{
	int number,max_number,min_number,number1,number2;
	int t ,i ;
	scanf("%d",&t);
	for (i=0;i<=t-1;i++)
		{
			scanf("%d%d",&number1,&number2);
			max_number=num_max(number1,number2);
			min_number=num_min(number1,number2);
			printf("%d %d\n",max_number,min_number);
		}
}

int num_max(int number1,int number2)
{
	int m=1 ,middle ;
	if (number1<number2)
		{
			middle=number2;
			number2=number1;
			number1=middle;
		}
	while (1)
		{
			m=number1%number2;
			if (m!=0)
				{
					number1=number2;
					number2=m;
				}
			else
				return number2;
		}
}
int num_min(int number1,int number2)
{
	int num ;
	num=num_max(number1,number2);
	return number1*number2/num;
}
