#include<stdio.h>


int main()
{
	int a,b,sum;
	even:
	printf("Enter two numbers \n");
	scanf("%d %d",&a,&b);
	if (a%2==0 && b%2==0)
	{
		sum=a+b;
		printf("The sum of both even integers is %d \n",sum);
	}
	else 
	{
		printf("Please enter both even numbers \n ");
		goto even;
	}
	return 0;
}