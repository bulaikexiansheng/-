#include<stdio.h>
#include<string.h>
int main()
{
	char *p1 ,*m ,str[100] ,ch ;
	int i ;
	gets(str);	//��ȡһ���ַ��� 
	p1=str;		//p1ָ���ַ�������׵�ַ 
	m=p1+strlen(p1)-1;//mָ���ַ������ĩ��ַ 
	while(p1<m)//whileѭ��������ǰ��ߵ� 
		{
			ch=*p1;
			*++p1=*m;//��ִ��*p1=*m����ִ��p1++ 
			*--m=ch;//��ִ��*m==ch����ִ��m-- 
		}
	
	printf("%s\n",str);
	
}
