#include<stdio.h>
int main()
{
	int number;
	printf("enter a number \n");
	scanf("%d",&number);
	if(number%2==0)
    {
		printf("number is divisble by 2 \n");
		if(number>0 && number<=50)
		{
			printf("number is greater than 0");
		}
		 else if(number>51 && number <=100)
		{
		 	printf("number is greater than 50");
		}
	
	}
	else if(number%3==0)
	{
		printf("number is divisible by 3");
		if(number>0 && number<=50)
		{
			printf("number is greater than 0");
		}
		else if(number>51 && number <=100)
		 {
		 	printf("number is greater than 50");
		 }
	}
	else 
	{
		printf(" number is not divible by 2 or 3");
	}
}
