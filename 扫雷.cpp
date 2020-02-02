#include<stdio.h>

int main()
{
	char boomarea[200][200] ,chx ;
	int i ,j ,n=0 ,m ;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		chx=getchar();
		for (i=1;i<=n;i++)
			for (j=1;j<=m+1;j++)
				{
					scanf("%c",&boomarea[i][j]);
					if (boomarea[i][j]=='?')
						{
							boomarea[i][j]='0';
						}	
				}
		for (i=1;i<=n;i++)
			for (j=1;j<=m;j++)
				{
					if (boomarea[i][j]=='*')
						{
							if (boomarea[i-1][j]!='*')
								boomarea[i-1][j]++;
							if (boomarea[i-1][j-1]!='*')
								boomarea[i-1][j-1]++;
							if (boomarea[i-1][j+1]!='*'&&boomarea[i-1][j+1]!='\n')
								boomarea[i-1][j+1]++;
							if (boomarea[i][j+1]!='*'&&boomarea[i][j+1]!='\n')
								boomarea[i][j+1]++;
							if (boomarea[i][j-1]!='*'&&boomarea[i][j-1]!='\n')
								boomarea[i][j-1]++;
							if (boomarea[i+1][j-1]!='*')
								boomarea[i+1][j-1]++;
							if (boomarea[i+1][j]!='*')
								boomarea[i+1][j]++;
							if (boomarea[i+1][j+1]!='*'&&boomarea[i+1][j+1]!='\n')
								boomarea[i+1][j+1]++;
						}
				}
		for (i=1;i<=n;i++)
			for (j=1;j<=m+1;j++)
				{
					printf("%c",boomarea[i][j]);
				}
	}
}
