// WAP a C program to find the area of circle
#include<stdio.h>
#include<conio.h>
#define Pi 3.1415

int main(){
	int r;
	float area,perimeter;
	printf("Enter the radius of circle: ");
	scanf("%d",&r);
	area=Pi*r*r;
	perimeter=2*Pi*r;
	printf("The area of circle is %f\n The perimeter of circle is %f ",area,perimeter);
	getch();
	return 0;
}
