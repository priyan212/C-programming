//Write a program that accepts the marks of 5 subjects and calculate the total % mark.
#include <stdio.h>
#include <stdlib.h>
int main(void) {

    float sub1,sub2,sub3,sub4,sub5,total,percent;
    printf("Enter the marks of subject 1:");
    scanf("%f",&sub1);
    printf("Enter the marks of subject 2:");
    scanf("%f",&sub2);
    printf("Enter the marks of subject 3:");
    scanf("%f",&sub3);
    printf("Enter the marks of subject 4:");
    scanf("%f",&sub4);
    printf("Enter the marks of subject 5:");
    scanf("%f",&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    percent=(total/500)*100;
	printf("The percentage=%f",percent);		
	return 0;
}