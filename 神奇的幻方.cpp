/*������ʹ��ѧ��ע���û�������
���� J: ����Ļ÷������飬������
ʱ������: 1 Sec  �ڴ�����: 32 MB
�ύ: 472  ���: 320
[�ύ][״̬][���۰�]
��Ŀ����
�÷���һ�ֺ������N*N������������1,2,3,����,N*N���ɣ���ÿ�С�ÿ�м������Խ����ϵ�����֮�Ͷ���ͬ����NΪ����ʱ�����ǿ���ͨ�����·�������һ���÷���
���Ƚ�1д�ڵ�һ�е��м䡣֮�󣬰����·�ʽ��С����������дÿ����K(K=2,3,��,N*N)��


1.��(K-1)�ڵ�һ�е��������һ�У���K�������һ�У�(K?1)�����е���һ�У�
2.��(K-1)�����һ�е����ڵ�һ�У���K���ڵ�һ�У�(K?1)�����е���һ�У�

3.��(K-1)�ڵ�һ�����һ�У���K����(K?1)�����·���
4.��(K-1)�Ȳ��ڵ�һ�У�Ҳ�������һ�У����(K?1)�����Ϸ���δ��������K����(K?1)�����Ϸ�������K����(K?1)�����·���
�ָ���N�밴������������N*N�Ļ÷���

����
�����ļ�ֻ��һ�У�����һ������N���÷��Ĵ�С��(NΪ������ ������31)

���
����ļ�����N�У�ÿ��N���������������������������N*N�Ļ÷���������������֮���õ����ո������

��������
3
�������
8 1 6
3 5 7
4 9 2
��ʾ*/

#include<stdio.h>
void square_find(int number[][31],int num,int size,int x,int y);
int main()
{
	int N ,i ,number[31][31]={0} ,m ;
	scanf("%d",&N);
	square_find(number,1,N,0,N/2);
	for (i=0;i<=N-1;i++)
		for (m=0;m<=N-1;m++)
			{
				if ((m+1)%N==0)
					printf("%d\n",number[i][m]);
				else
					printf("%d ",number[i][m]);
			}
	
	return 0;
}

void square_find(int number[][31],int num,int size,int x,int y)
{
	if (num==size*size+1)
		return ;
	if (num==1)
		{
			number[x][y]=num;
			square_find(number,num+1,size,x,y);
		}
	else 
		{
			if (x==0&&y!=size-1)
				{
					x=size-1;
					y=y+1;
					number[x][y]=num;
					square_find(number,num+1,size,x,y);
				}
			else if (y==size-1&&x!=0)
				{
					y=0;
					x--;
					number[x][y]=num;
					square_find(number,num+1,size,x,y);
					
				}
			else if (x==0&&y==size-1)
				{
					x++;
					number[x][y]=num;
					square_find(number,num+1,size,x,y);
				}
			else if (x!=0&&y!=size-1)
				{
					if (number[x-1][y+1]==0)
						{
							x--;
							y++;
							number[x][y]=num;
							square_find(number,num+1,size,x,y);
						}
					else
						{
							x++;
							number[x][y]=num;
							square_find(number,num+1,size,x,y);
						}
				}
		}
}
