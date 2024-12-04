//WAP a C program to calculate area of rectangle
#include<stdio.h>
#include<conio.h>


int main(){
	int l,b,area;
	printf("Enter the length and breadth of rectangle: ");
	scanf("%d %d",&l,&b);
	area=2*(l+b);
	printf("The area of rectangle is %d",area);
	getch();
	return 0;
}
