/*问题 A: 将数列中最大数与最小数对换----函数
时间限制: 1 Sec  内存限制: 128 MB
提交: 1388  解决: 455
[提交][状态][讨论版]
题目描述
输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写三个函数； ①输入10个数；②进行处理；③输出10个数。
输入
10个整数
输出
整理后的十个数，每个数后跟一个空格（注意最后一个数后也有空格）
样例输入
2 1 3 4 5 6 7 8 10 9
样例输出
1 2 3 4 5 6 7 8 9 10 
提示*/


#include<stdio.h>
void input(int number[10]);
void operate(int number[10]);
void output(int number[10]);
int main()
{
	int p[10];
	input(p);
	operate(p);
	output(p);
}

void input(int number[10])
{
	int i ;
	for (i=0;i<=9;i++)
		{
			scanf("%d",&number[i]);
		}
}
void operate(int number[10])
{
	int max ,min ,middle ;
	int i ;
	max=min=0;
	for (i=0;i<=9;i++)
		{
			if (number[i]<number[min])
				{
					min=i;
				}
		}
	if (min!=0)
		{
			middle=number[min];
			number[min]=number[0];
			number[0]=middle;
		}
	for (i=0;i<=9;i++)
		{
			if (number[i]>number[max])
				{
					
					
					max=i;
				}
		}
	if (max!=0)
		{
			middle=number[max];
			number[max]=number[9];
			number[9]=middle;
		}
}
void output(int number[10])
{
	int i;
	for (i=0;i<=9;i++)
		{
			printf("%d ",number[i]);
		}
	printf("\n");
}
