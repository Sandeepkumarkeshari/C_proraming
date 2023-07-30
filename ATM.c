#include<stdio.h>
void main()
{
	int pin,widraw,balance,status;
	float payment,option;
	printf("Welcome to Bank of Baroda");
	scanf("%d%d%d%d%",&pin,&widraw,&balance,&status);
	if(option==1)
	{
		printf("Give your ATM pin");
		scanf("%d",&pin);
	}
	else if(option==2){
		printf("Follow the process of the widraw system");
		scanf("%d",&widraw);
	}
	else if(option==3)
	{
		printf("Taking the balance enquiry process");
		scanf("%d",&balance);
	}
	else if(option==4)
	{
		printf("Follow the process of the Status pf your account ");
		printf("%d",&status);
	}
	else{
		printf("You are taking the wrong process");
	}
}