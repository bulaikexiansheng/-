/*������ʹ��ѧ��ע���û�������
���� B: ��дɾ���ַ�����ĳ���ַ��ĺ���----����
ʱ������: 1 Sec  �ڴ�����: 128 MB
�ύ: 2140  ���: 884
[�ύ][״̬][���۰�]
��Ŀ����
���ƺ���del_char

����ԭ��Ϊ void del_char(char a[],char ch),�����Ĺ�����ɾ��aָ����ַ�����ֵΪch���ַ���������ַ���"AscADef"��ɾ��'A'���ַ���Ϊ"scDef"��

����
��Ҫɾ�����ַ�ch

��Ҫ������ַ���

���
�������ַ���

��������
A
AscADef
�������
scDef
��ʾ*/
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
