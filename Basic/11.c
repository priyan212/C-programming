//Write a program to input any two number. If the first number is greater than second then print the difference of these two numbers else print their sum. Write this program using conditional operator.
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
printf("Enter the second number:");
    scanf("%d",&b);
    (a>b)? printf("the difference is:%d",a-b) : printf("The sum is:%d",a+b) ;
				
	return 0;
}