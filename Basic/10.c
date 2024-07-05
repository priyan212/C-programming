//Write a program to input any number and print the value of reminder after dividing it by 3
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int a,b;
    printf("Enter the number");
    scanf("%d",a);
b=a%3;
printf("the remainder is :%d",b);				
	return 0;
}