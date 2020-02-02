#include<stdio.h>
int main()
{
	int *pi ;
	char *pc;
	long *pl;
	pi = (int *)1000;
	pc = (char *)1000;
	pl = (long *)1000;
	
	pi++;
	printf("sizeof(int) = %d, pi= %d\n",sizeof(int),pi);
	
	pi-=2;
	printf("pi = %d\n",pi);
	
	pc++;
	printf("sizeof(char)=%d, pc =%d\n",sizeof(char),pc);
	
	pc -= 2;
	printf("pc = %d\n",pc);
	
	pl++;
	printf("sizeof(long)=%d,pl =%d\n",sizeof(long),pl);
	
	pl -= 2;
	printf("pl = %d\n",pl);  
}
