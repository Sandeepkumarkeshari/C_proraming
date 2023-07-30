#include<stdio.h>
void main()
{
	int p,m,e,c,s;
	float percentage;
	printf("Give the value of five number ");
	scanf("%d%d%d%d%d",&p,&m,&e,&c,&s);
	percentage=(p+e+c+m+s)/5;
	printf("total percentage = %.2f\n",percentage);
	if(percentage>=90)
	{
		printf ("Passing the student grade A");
	}
	else if(percentage>=80){
		printf("Student is passing the grade B");
	}
	else if(percentage>=70)
	{
		printf("Student is passing the grade C");
	}
	else if(percentage>=60)
	{
		printf("Student is passing the grade D");
		
	}
	else if(percentage>=50)
	{
		printf("Student is passing the grade E");
	}
	else{
		printf("student is the list of failed condition");
	
	}
	return 0;
}