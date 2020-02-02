/*！！请使用学号注册用户名！！
问题 J: 神奇的幻方（数组，函数）
时间限制: 1 Sec  内存限制: 32 MB
提交: 472  解决: 320
[提交][状态][讨论版]
题目描述
幻方是一种很神奇的N*N矩阵：它由数字1,2,3,……,N*N构成，且每行、每列及两条对角线上的数字之和都相同。当N为奇数时，我们可以通过以下方法构建一个幻方：
首先将1写在第一行的中间。之后，按如下方式从小到大依次填写每个数K(K=2,3,…,N*N)：


1.若(K-1)在第一行但不在最后一列，则将K填在最后一行，(K?1)所在列的右一列；
2.若(K-1)在最后一列但不在第一行，则将K填在第一列，(K?1)所在行的上一行；

3.若(K-1)在第一行最后一列，则将K填在(K?1)的正下方；
4.若(K-1)既不在第一行，也不在最后一列，如果(K?1)的右上方还未填数，则将K填在(K?1)的右上方，否则将K填在(K?1)的正下方。
现给定N请按上述方法构造N*N的幻方。

输入
输入文件只有一行，包含一个整数N即幻方的大小。(N为奇数， 不超过31)

输出
输出文件包含N行，每行N个整数，即按上述方法构造出的N*N的幻方。相邻两个整数之间用单个空格隔开。

样例输入
3
样例输出
8 1 6
3 5 7
4 9 2
提示*/

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
