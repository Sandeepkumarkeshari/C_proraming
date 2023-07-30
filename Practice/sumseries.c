//write a program to find the  piramid 

#include<stdio.h>
void main()
{ 
	int i;
	for( int i=1;i<=5;i++){
		for( int j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}