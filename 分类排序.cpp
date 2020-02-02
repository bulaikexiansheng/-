#include<stdio.h>
#define odd 1
#define even 0
#define exist 1
#define inexist 0
void sort(int a[],int n);
int find(int a[],int n,int value);
void display (int a[],int n);
void reverse(int a[],int n);
void deleted(int a[],int index,int n);
void special_fuction(int a[],int even_number,int odd_number,int n);
int main()
{
	int n ,number[10] ,a_number ,i ,m ,flagoe ,flagexist ,index ;
	int even_number ,odd_number ;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
			even_number=odd_number=0;
			for (m=0;m<=9;m++)
				{
					scanf("%d",&number[m]);
				}
			scanf("%d",&a_number);
			if (a_number%2==0)
				{
					flagoe=even;
				}
			else
				{
					flagoe=odd;
				}
		
			index=find(number,10,a_number);
			if (index!=-1)
				{
					flagexist=exist;
				}
			else
				{
					flagexist=inexist;
				}
			
			if (flagoe==odd&&flagexist==exist)
				{
					
					deleted(number,index,10);
					sort(number,9);
					display(number,9);
					if (i!=n)
						printf("\n");
						
				}
			else if (flagoe==even&&flagexist==inexist)
				{
					number[10]=a_number;
					sort(number,11);
					reverse(number,11);
					display(number,11);
					if (i!=n)
						printf("\n");
				}
			else
				{
					for (m=0;m<=9;m++)
						{
							if (number[m]%2==even)
								{	
									even_number++;
								}
							else
								{
									odd_number++;
								}
						}
					special_fuction(number,even_number,odd_number,10);
					display(number,10);
					if (i!=n)
						printf("\n");
				}
		}
}


void display (int a[],int n)
{
	int i ;
	for (i=0;i<=n-1;i++)
		{
			printf(i==n-1?"%d":"%d ",a[i]);
		}
	
}

void deleted (int a[],int index,int n)
{
	int i ;
	for (i=index;i<=n-2;i++)
		{
			a[i]=a[i+1];
		}
}

int find(int a[],int n,int value)
{
	int i;
	for (i=0;i<=n-1;i++)
		{
			if (a[i]==value)
				{
					return i;
				}
		}
	return -1;
}

void sort(int a[],int n)
{
	int i ,middle ,m ;
	for (m=0;m<=n-2;m++)
		for (i=m+1;i<=n-1;i++)
			{
				if (a[i]<a[m])
					{
						middle=a[i];
						a[i]=a[m];
						a[m]=middle;
					}	
			} 
}

void reverse(int a[],int n)
{
	int i ,m ,middle ;
	for (i=0,m=n-1;i<=n/2;i++,m--)
		{
			middle=a[i];
			a[i]=a[m];
			a[m]=middle;
		}
}

void special_fuction(int a[],int even_number,int odd_number,int n)
{
	int i ,m ,y ,middle ,j ,k ;
	m=even_number;
	y=0;
	for (i=0;i<=n-1;i++)
		{
			if (a[i]%2!=even)
				{
					middle=a[i];
					a[i]=a[y];
					a[y]=middle;
					y++;
				}
		
		}
	for (j=0;j<=even_number-2;j++)
		{
			for (k=j+1;k<=even_number-1;k++)
				{
					if (a[j]<a[k])
						{
							middle=a[j];
							a[j]=a[k];
							a[k]=middle;
						}
				}
		}
	for (j=odd_number;j<=n-2;j++)
		{
			for (k=j+1;k<=n-1;k++)
				{
					if (a[j]<a[k])
						{
							middle=a[j];
							a[j]=a[k];
							a[k]=middle;
						}
				}
		}
	
	
}
