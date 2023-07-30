    //Using void return type make a program to add to number
	/*#include<stdio.h>
void add()
{
	int a=10,b=20;
	int c=a+b;
	printf("The sum is %d",c);
}
void main()
{
	printf("Ram\n");
	add();
}*/


//Using int return type make a program to add to number
/*#include<stdio.h>
 int add()
 {
 	int a=10,b=20;
 	int c=a+b;
 	return c;
 }
void main()
{
	int x=add();
	printf("The sum of the value is the %d",x);
}*/

//parameterise function.....

/*
#include<stdio.h>
  int disp( int n)
{
	for( int i=1;i<=10;i++)
	{
		printf("%d",n);
	}
	return n;
}
void main()
{
 int a;
 printf("Enter the number");
 scanf("%d",&a);
 disp(a);
 disp(6);	
}*/




//print the facturial number to use parameterise function....









//print the prime number to use the parameterise function.....

#include<stdio.h>
 int prime( int n)
 {
 	int i;
 	for(i=1;i<=100;i++)
 	{
 		if(i%2!=0)
 		{
 			printf("%d",i);
		 }
	 }
	 return n;
 }
void main()
{
 printf("%d",prime(100));	
}