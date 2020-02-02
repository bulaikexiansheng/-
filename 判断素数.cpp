#include<stdio.h>
#include<math.h> 
void isprime(int number);
int main()
{
	int T ,i ,number;
	scanf("%d",&T);
	for (i=1;i<=T;i++)
		{
			scanf("%d",&number);
			isprime(number);
			printf("\n");
		}
	return 0;
}

void isprime(int number)
{
	int m ,flag=0;
	if (number==2||number==3)
		{
			printf("prime");
		}
	else if (number==1||number==0)
		{
			printf("not prime");
		}
	else
		{
			for(m=2;m<number-1;m++)
				{
					if (number%m==0)
						{
							printf("not prime");
							flag=0;
							break;
						}
					else
						{
							flag=1;
						}
				}
			if (flag==1)
				{
					printf("prime");
				}
		}
}
