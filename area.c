//Write a program to print the area of circum 3.14*r*r..and radious of circum 2*3.14*r........
#include<stdio.h>
 void main()
{
	int r;
	float a,c;
	printf("Enter the radious of circum");
	scanf("%d",&r);
	a=3.14*r*r;
	c=2*3.14*r;
	printf("area of circum is %f\n",a);
	printf("circum of circle%f\n",c);
	
}
//           or
/*#include<stdio.h>
void main()
{
	int r;
	float a,c,pi=3.14;
	printf("enter the area of circle");
	scanf("%d",&r);
	a=pi*r*r;
	c=2*pi*r;
	printf("area of circle is %f\n",a);
	scanf("circum of circle is %f\n",c);
}*/