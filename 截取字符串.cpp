/*
��ҳ	���۰�	����	����	״̬	ͳ��
������ʹ��ѧ��ע���û�������
���� C: ��ȡ�ַ���(����)
ʱ������: 1 Sec  �ڴ�����: 128 MB
�ύ: 1003  ���: 252
[�ύ][״̬][���۰�]
��Ŀ����
��дһ������int substr(char str1[],char str2[],int index)���������ǣ������ַ���str1 (���ȳ���30) �ĵ�index���ַ���ʼ�������ַ����ƣ������µ��ַ���str2������ɹ����ɣ���������1��������ܳɹ����ɣ�����0

����
�������ݵ�����n

��һ������

�ڶ�������

........

���
�ɹ����ɾ�����Ӵ������ɹ����ɣ����"IndexError"

��������
3
Zhenshen University
9
www.szu.edu.cn
12
apple
8
�������
University
cn
IndexError
��ʾ
[�ύ][״̬][���۰�]
����  English 
All Copyright Reserved 2010-2011 ���ڴ�ѧ���������ѧƽ̨ TEAM*/
//���������Ǹ��� 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int substr(char str1[],char str2[],int index);
int main()
{
	int index ,i ,n ,result;
	char str1[100] ,str2[100] ,chx ;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
			chx=getchar();
			gets(str1);
			scanf("%d",&index);
			result=substr(str1,str2,index);
			if (result==1)
				{
					printf("%s\n",str2);
				}
			else 
				{
					printf("IndexError\n");
				}
			
		}
		
} 

int substr(char str1[],char str2[],int index)
{
	int m ,k ;
	int length;	
	length=strlen(str1);
	if (index<0)
		return 0;
	else if (length<=index)
		return 0;
	for (k=index,m=0;str1[k]!='\0';k++,m++)
		{
			str2[m]=str1[k];
		}
	str2[m]='\0';
	return 1;

}
