/*���� A: �����������������С���Ի�----����
ʱ������: 1 Sec  �ڴ�����: 128 MB
�ύ: 1388  ���: 455
[�ύ][״̬][���۰�]
��Ŀ����
����10����������������С�������һ�����Ի����������������һ�����Ի���д���������� ������10�������ڽ��д��������10������
����
10������
���
������ʮ������ÿ�������һ���ո�ע�����һ������Ҳ�пո�
��������
2 1 3 4 5 6 7 8 10 9
�������
1 2 3 4 5 6 7 8 9 10 
��ʾ*/


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
