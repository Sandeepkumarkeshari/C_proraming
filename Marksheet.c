#include<stdio.h>
void main()
{
	int Hindi,English,Math,Socialscience,Computer;
	printf("Enter the subject details number");
	scanf("%d%d%d%d%d",&Hindi,&English,&Math,&Socialscience,&Computer);
	if(Hindi>=33&&English>=33&&Math>=33&&Socialscience>=33&&Computer>=33)
	{
		printf("Student is the passed ");
	}
	else
	{
		printf("student is the failed");
	}
}