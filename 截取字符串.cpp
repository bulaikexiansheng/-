/*
主页	讨论版	问题	名次	状态	统计
！！请使用学号注册用户名！！
问题 C: 截取字符串(函数)
时间限制: 1 Sec  内存限制: 128 MB
提交: 1003  解决: 252
[提交][状态][讨论版]
题目描述
编写一个函数int substr(char str1[],char str2[],int index)，其作用是，将从字符串str1 (长度超过30) 的第index个字符开始的所有字符复制，生成新的字符串str2，如果成功生成，函数返回1，如果不能成功生成，返回0

输入
测试数据的组数n

第一组数据

第二组数据

........

输出
成功生成就输出子串，不成功生成，输出"IndexError"

样例输入
3
Zhenshen University
9
www.szu.edu.cn
12
apple
8
样例输出
University
cn
IndexError
提示
[提交][状态][讨论版]
中文  English 
All Copyright Reserved 2010-2011 深圳大学在线判题教学平台 TEAM*/
//索引不能是负数 
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
