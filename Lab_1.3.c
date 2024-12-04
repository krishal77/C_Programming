// WAP a C program to find sum and average of two numbers
#include<stdio.h>
#include<conio.h>

int main (){
	int a,b,sum,avg;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	avg=(a+b)/2;
	printf("The Sum of the numbers is %d\n The average of the numbers is %d",sum,avg);
	return 0;
}
