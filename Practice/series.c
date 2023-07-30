//find the 1-100 number squre.....
/*#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		printf("The squre number is the %d\n",i*i);
	}
}*/

// write a program to find out the number n(n-1) series....

/*#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=5;i++){
		printf("The series number is the %d",i*i-1);
	}
}*/

//find the 1-100 number series n(n-1)

/*#include<stdio.h>
void main()
{
	for( int i=1;i<=100;i++){
		printf("The number is the %d\n",i*i-1);
	}
}*/

//find the number 2,5,10,17 means i*i+1

/*#include<stdio.h>
void main()
{
	for(int i=1;i<=10;i++){
		printf("The number is the%d\n",i*i+1);
	}
}*/

//write a program to find the 1,8,27,64....
/*#include<stdio.h>
void main()
{
	for( int i=1;i<=10;i++){
		printf("The num is the %d\n",i*i*i);
	}
}*/

//Write a program to find out the 0,7,26,63....

/*#include<stdio.h>
void main()
{
	for(int i=1;i<=5;i++){
	
		printf("The number is the cube substraction%d\n", i*i*i-1);
	}                                                
}*/
 
//write a program to find out the number 2,9,28,65...
/*#include<stdio.h>
void main()
{
	for(int i=1;i<=4;i++)
	{
		printf("The number is the cube addition%d\n",i*i*i+1);
	}
}*/

//write a program to find out the number 1,-2,3,-4

/*#include<stdio.h>
void main()
{
	for(int i=1;i<=10;i++)
	{
		if(i%2==0){
			printf("-%d\n",i);
		}
		else{
			printf("%d\n",i);
		}
}
}*/

//write a program to find the number -1,2,-3,4....
/*#include<stdio.h>
void main()
{
	for(int i=1;i<=10;i++)
	{
		if(i%2!=0){
			printf("-%d\n",i);
		}
		else{
			printf("%d\n",i);
		}
	}
}*/

 //write a program to find the number 1-5 in piramid style...
 /*#include<stdio.h>
 void main()
 {
 	for( int i=1;i<=5;i++){
 		for( int j=1;j<=i;j++){
 			
		printf("%d\t",i); 
		 }
		 printf("");
	 }
 }*/
 
 
 //write a program to find the number 1 for 5 time in piramid style....
/* #include<stdio.h>
 void main()
 {
 	int i,a=0;
 	for( int i=1;i<=10;i++){
 		a=a*10+i;
 		printf("%d\n",a);
	 }
 }*/
 
 //write a program to finding the numbers 1,11,111,
 
 /*#include<stdio.h>
 void main(){
 	int i,a=0;
 	for( int i=1;i<=10;i++){
 		a=a*10+1;
 		printf("%d\n",a);
	 }
 }*/
 
 //write a program to find the number 2,-4,6,-8.....
 
/*#include<stdio.h>
void main()
{      
    int i,n;
	printf("Enter the value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0){
			printf("-%d",i);
		}
		else{
		printf("%d",i);	
		}
	}
}*/
	
 
/*#include<stdio.h>
int main() {
	int n,i;
	int sum=0;
	printf("Enter the n i.e. max values of series: ");
	scanf("%d",&n);
	sum = (n * (n + 1)) / 2;
	printf("Sum of the series: ");
	for (i =1;i <= n;i++) {
		if (i!=n)
		             printf("%d + ",i); else
		             printf("%d = %d ",i,sum);
	}
	return 0;
}*/

//write a program to find the addition for series number....1+2+3+=sum....
/*#include<stdio.h>
void main(){
	int i,n,sum=0;
	printf("Enter the number of the series");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	for(i=1;i<=n;i++){
		if(i!=n){
			printf("%d+",i);
		}
		else{
				printf("%d=%d",i,sum);
			}
	}
}*/

//write a progrqm to find the addition of even numbers.......to n times

/*#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Give the value of the number");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	for(i=1;i<=n;i++)
	{
		if(i%2==0){
			printf("%d+",i);
		}
		else{
			printf("");
		}
	}
}*/

//write a program to find the number of odd series number addtion......

/*#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Please enter the value");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			printf("%d+",i);
		}
		else{
			printf("");
		}
	}
}*/

//write a program to find the fibonise number 1-10...
/*#include<stdio.h>
void main(){
	int a=0; int b=1; int c=a+b; int i;
	for(i=1;i<=10;i++){
		a=b;
		b=c;
		c=a+b;
		printf("%d\n",c);
	}
}*/

//write a program to find the trie fibonic number....
/*#include<stdio.h>
void main(){
	int a=0; int b=1; int c=2; int i; int d;
	for(i=2;i<=10;i++){
		a=b;
		b=c;
		c=a+b;
		d=a+b+c;
		
		printf("%d\n",d);
	} 
}*/


//write a program to find the table to between the two number ....
/*#include<stdio.h>
void main(){
	int n,m,i;
	printf("Please enter the value\n");
	scanf("%d%d",&n,&m);
	for( int i=1;i<=10;i++){
		for( int j=1;j<=i;j++){
			printf("%d%d\n",i*j);
		}
	}
	}*/
	
//write a program to print the nested loop......1-10

/*#include<stdio.h>
void main(){
	int i,j;
	printf("Please enter the value");
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}*/

//write a program to print the nested loop for 10-1

/*#include<stdio.h>
void main()
{
	int i,j;
	printf("The value of the nested loop is the\n");
	for(i=10;i>=1;i--)
	{
		for(j=10;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}*/


//write a program to find the nested loop to print the 5-1

/*#include<stdio.h>
void main(){
	printf("The nested value is the \n");
	for( int i=5;i>=1;i--){
		for( int j=5;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}*/

//write a program to find the nested lopp

/*#include<stdio.h>
void main(){
	 int a=0;
	printf("The value is the\n");
	for( int i=1;i<=5;i++){
		a=a*10+1;
		printf("%d ",a);
			}
}*/

//write a programto using nested loop....
/*
#include<stdio.h>
void main(){
	printf("The value of the nested loop is the\n");
	int i,j;
	for(i=5;i>=1;--i){
		for(j=5;j>=i;--j){
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>
void main(){
	int i,j,row,k;
	printf("Enter the number of row : ");
	scanf("%d",&row);
	printf("\n");
	for(i=1;i<=row;++i) //outer loop
	{	
		for(j=i;j<=row;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
void main(){
	for(int i=5;i>=1;i--){
		for(int j=1;j<=i;j++){
		printf("%d",j);
		}
		printf("\n");
	}
}*/


//write a program for the 1,11,111,1111,Series for n time......

#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i*10+1);
	}
	
}


