//Write a program to input any number and check whether it is even or odd.  
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if (a%2==0){
   printf("the nunmber is even");
    }
   else if (a==0){
   printf("the number is zero");
   }
   else
   printf("the number is odd");			
	return 0;
}