//WAP in c to read marks of 3 subjects and calculate percentage and division
#include<stdio.h>
#include<conio.h>
int main() {
    float m1,m2,m3,total,per;
    char div[20];

    printf("Enter marks in subject 1, subject 2 and subject 3: ");
    scanf("%f %f %f", &m1,&m2,&m3);
    total = m1+m2+m3;
    per = (total/300)*100;

    if (per >= 60) {
        printf("First Division");
    } else if (per >= 50) {
        printf( "Second Division");
    } else if (per >= 40) {
        printf( "Third Division");
    } else {
        printf( "Fail");
    }

    printf("\nThe Percentage of student is: %.2f%%", per);
    return 0;
}

