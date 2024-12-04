//WAP a C program to find if a person is eligible for votiong or not
#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	printf("Enter the age of person");
	scanf("%d",&age);
	if (age>18)
	printf("The person is eligible for voting.\n");
	else
	printf("The person is not eligible for voting.\n");
	getch();
	return 0;
}
