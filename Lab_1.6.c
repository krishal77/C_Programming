//WAP a C program to find the largest number among three number
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&& (a>c))
	printf("A is the largest\n");
	else if( (b>a)&& (b>c))
	printf("B is the largest\n");
	else
	printf("C is the largest\n");
	getch();
	return 0;
}
