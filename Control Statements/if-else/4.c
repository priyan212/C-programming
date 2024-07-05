//Write a program to input any year and check whether it is leap year or not.
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int year;
    printf("enter the number:");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0){
   printf("Leap year");
    }
   else if (year%400==0 && year%100==0){
   printf("Leap year");
   }
   else
   printf("Not Leap year");			
	return 0;
}