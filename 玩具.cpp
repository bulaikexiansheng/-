#include<stdio.h>
int Check(char BuyAlpha[]);
int main()
{
	int T ,i ,n ,result ;
	char str[10001] ,chx ;
	scanf("%d",&T);
	for (i=1;i<=T;i++)
		{
			scanf("%d",&n);
			chx=getchar();
			scanf("%s",str);
			if (n<=17)
				{
					printf("NO\n");	
				}
			else
				{
					
					result=Check(str);
					if (result==0)
						printf("NO\n");
					else if(result==1) 
						printf("YES\n");
				} 
		}
	return 0;
}

int Check(char BuyAlpha[])
{
	int i;
	int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0;
	int flag9=0,flag11=0,flag12=0;
	for (i=0;BuyAlpha[i]!='\0';i++)
		{
			if (BuyAlpha[i]=='s')
				flag1++;
			else if (BuyAlpha[i]=='h')
				flag2++;
			else if (BuyAlpha[i]=='e')
				flag3++;
			else if (BuyAlpha[i]=='n')
				flag4++;
			else if (BuyAlpha[i]=='z')
				flag5++;
			else if (BuyAlpha[i]=='u')
				flag6++;
			else if (BuyAlpha[i]=='i')
				flag7++;
			else if (BuyAlpha[i]=='v')
				flag8++;
			else if (BuyAlpha[i]=='r')
				flag9++;
			else if (BuyAlpha[i]=='t')
				flag11++;
			else if (BuyAlpha[i]=='y')
				flag12++;
		}
	
	if(flag1==2&&flag2==2&&flag3==3&&flag4==3&&flag5==1&&flag6==1&&flag7==2&&flag8==1&&flag9==1&&flag11==1&&flag12==1)
		return 1;
	else 
		return 0;
}
