/*！！请使用学号注册用户名！！
问题 B: 编写删除字符串中某个字符的函数----函数
时间限制: 1 Sec  内存限制: 128 MB
提交: 2140  解决: 884
[提交][状态][讨论版]
题目描述
编制函数del_char

函数原型为 void del_char(char a[],char ch),函数的功能是删除a指向的字符串中值为ch的字符，例如从字符串"AscADef"中删除'A'后，字符串为"scDef"。

输入
需要删除的字符ch

需要处理的字符串

输出
处理后的字符串

样例输入
A
AscADef
样例输出
scDef
提示*/
#include<stdio.h>
void del_char(char a[],char ch);
int main()
{
	char ch ;
	char a[100] ,chx ;
	int i ,m ;
	scanf("%c",&ch);
	chx=getchar();
	scanf("%s",a);
	del_char(a,ch);
	printf("%s\n",a);
} 

void del_char(char a[],char ch)
{
	int i ,m ;
	for (i=0;a[i+1]!='\0';i++)
		{
			if (a[i]==ch)
				{
					m=i;
					while(a[m+1]!='\0')
						{
							a[m]=a[m+1];
							m++;
						}
					a[m]='\0';
				}
			if (a[i]==ch)
				{
					i--;
				}
		}
	if (a[i]==ch)
		{
			a[i]='\0';
		}
}
