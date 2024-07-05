//Write a program to input any number and check whether it is positive or negative or zero. 
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if (a>0){
   printf("the nunmber is positive");
    }
   else if (a==0){
   printf("the number is zero");
   }
   else
   printf("the number is negative");			
	return 0;
}