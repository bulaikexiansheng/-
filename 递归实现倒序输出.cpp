#include<stdio.h>
void revprintf(char ch[],int length);
int main()
{
	int n ;
	char ch[100] ,chx ;
	scanf("%d",&n);
	chx=getchar();
	scanf("%s",ch);
	revprintf(ch,n);
	printf("\n"); 
	return 0;	
} 

void revprintf(char ch[],int length)
{
	if (length==0)
		return ;
	printf("%c",ch[length-1]);
	revprintf(ch,length-1);
}
