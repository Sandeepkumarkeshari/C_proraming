/*#include<stdio.h>
void main()
{
	for(int i=1;i<=10;i++)
	{
	if(i==5)
	break;
	printf("%d",i);
	}
}*/




#include<stdio.h>
void main()
{
	int i,n;
	printf("Please enter the any digit number");
	scanf("%d",&n);
	for(i=n;i>=10;i++)
	{
		if(i==8)
		printf("%d",n);
	}
}