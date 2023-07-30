#include<stdio.h>
void main()
{
	int per,n;
	printf("Please enter the number");
	scanf("%d",&n);
	if(per>=0 && per<=33){
		printf("Student is the failed");
	}
	else if(per>=34&&per<=45){
		printf("Student is the passed to the third divison");
	}
	else if(per>=46&&per<=54){
		printf("Student is the passed to second divison");
	}
	else if(per<=55&&per<=65){
		printf("Student is the passed to first divison");
	}
	else if(per>=66&&per<=100){
		printf("Student is belong to Topper list");
		
	}
	else("Please enter the valid percentage");
}