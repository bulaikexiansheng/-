#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,w,m,sum,number;
	char idcard[20],num;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
		{
			sum=0;number=0;
			scanf("%s",idcard);
			for(m=16;m>=8;m--)
			{
				idcard[m]=idcard[m-2];
			}
			idcard[6]='1';
			idcard[7]='9';
			for(m=0;m<=16;m++)
			{	
				switch(m)
					{
						case 0:
						case 10:w=7;break;
						case 1:
						case 11:w=9;break;
						case 2:
						case 12:w=10;break;
						case 3:
						case 13:w=5;break;
						case 4:
						case 14:w=8;break;
						case 5:
						case 15:w=4;break;
						case 6:
						case 16:w=2;break;
						case 7:w=1;break;
						case 8:w=6;break;
						case 9:w=3;break;
					}
				sum+=(idcard[m]-'0')*w;
				

			}
			number=sum%11;
			switch(number)
				{
					case 0:num='1';break;
					case 1:num='0';break;
					case 2:num='X';break;
					case 3:num='9';break;
					case 4:num='8';break;
					case 5:num='7';break;
					case 6:num='6';break;
					case 7:num='5';break;
					case 8:num='4';break;
					case 9:num='3';break;
					case 10:num='2';break;
					
				}
			printf("%s%c\n",idcard,num);	

		}
	return 0;
}

