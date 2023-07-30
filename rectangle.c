//Write a program for finding the reatengle length and breath value of reatengle find out and perimeter
#include<stdio.h>
void main()
{
	int l,b,p,a;
	printf("Enter the value of l and b\n");
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf(" value of area of rectangle %d\n",a);
	printf("value of paremeter %d",p);
}