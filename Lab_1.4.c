//WAP a C program to find quotient and remainder of two numbers

#include<stdio.h>
#include<conio.h>

int main (){
	int a,b,quo,rem;
	printf("Enter the dividend: ");
	scanf("%d",&a);
	printf("Enter the divisor: ");
	scanf("%d",&b);
	quo=a/b;
	rem=a%b;
	printf("The Quotient of the numbers is %d\n The remainder of the numbers is %d",quo,rem);
	return 0;
}
