#include<stdio.h>
int main()
{
	int T ,i ,m ,time_number ,sum ,lastnumber ;
	char id_number[25] ,chx ;
	scanf("%d",&T);
	chx=getchar();
	for (i=1;i<=T;i++)
		{
			sum=0;
			scanf("%s",id_number);
			for (m=14;m>=6;m--)
				{
					id_number[m+2]=id_number[m];
				}
			id_number[6]='1';
			id_number[7]='9';
			for (m=1;m<=17;m++)
				{
					switch(m)
						{
							case 1:
								time_number=7;break;
							case 2:
								time_number=9;break;
							case 3:
								time_number=10;break;
							case 4:
								time_number=5;break;
							case 5:
								time_number=8;break;
							case 6:
								time_number=4;break;
							case 7:
								time_number=2;break;
							case 8:
								time_number=1;break;
							case 9:
								time_number=6;break;
							case 10:
								time_number=3;break;
							case 11:
								time_number=7;break;
							case 12:
								time_number=9;break;
							case 13:
								time_number=10;break;
							case 14:
								time_number=5;break;
							case 15:
								time_number=8;break;
							case 16:
								time_number=4;break;
							case 17:
								time_number=2;break;	
						}
					sum+=(id_number[m-1]-'0')*time_number;
					
				}
			lastnumber=sum%11;
			switch(lastnumber)
				{
					case 0:
						id_number[17]='1';break;
					case 1:
						id_number[17]='0';break;
					case 2:
						id_number[17]='X';break;
					case 3:
						id_number[17]='9';break;
					case 4:
						id_number[17]='8';break;
					case 5:
						id_number[17]='7';break;
					case 6:
						id_number[17]='6';break;
					case 7:
						id_number[17]='5';break;
					case 8:
						id_number[17]='4';break;
					case 9:
						id_number[17]='3';break;
					case 10:
						id_number[17]='2';break;
					
				}
		
			printf("%s\n",id_number);
		}
}
