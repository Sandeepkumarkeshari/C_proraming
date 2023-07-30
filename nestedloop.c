#include<stdio.h>
void main()
{
	int n,i;
	printf("Please enter the value\n");
	scanf("%d",&n);
	for(n=10;n>=1;n--)
	{	
	for(i=n;i<=10;i++)
	{
	printf("%d\n",i);	
	}
	}
}
