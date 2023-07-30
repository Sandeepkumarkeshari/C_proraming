//Write a program to find out the area of the circle  curcumface of the circle......
//a=3.14*r*r
//c=2*3.14*r
#include<stdio.h>
void main()
{
	int r;
	float a,c;
	printf("Please enter the value");
	scanf("%d",&r);
	a=3.14*r*r;
	c=2*3.14*r;
	printf("Area of the circle is the%f\n",a);
	printf("Curcume face of the circle is the%f",c);
}