#include<stdio.h>
#include<string.h>
int main()
{
	char *p1 ,*m ,str[100] ,ch ;
	int i ;
	gets(str);	//读取一个字符串 
	p1=str;		//p1指向字符数组的首地址 
	m=p1+strlen(p1)-1;//m指向字符数组的末地址 
	while(p1<m)//while循环来控制前后颠倒 
		{
			ch=*p1;
			*++p1=*m;//先执行*p1=*m，再执行p1++ 
			*--m=ch;//先执行*m==ch，再执行m-- 
		}
	
	printf("%s\n",str);
	
}
