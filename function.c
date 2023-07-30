/*#include<stdio.h>
 void add()
 {
 	int a=10;b=20;
 	int c=a+b;
 	printf("sum is %d",c);
 }
void main()
{
	printf("Ram");
	add();
}*/
#include<stdio.h>
int add()
{
	int a=10,b=20;
    int c=a+b;
	printf("%d",c); 
	return c;
}
void main()
{
	//printf(" The sum is the a and b%d",x);
	printf("%d",add());
}