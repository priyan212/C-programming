//Write a program to input three numbers and find the smallest one (using else-if ladder).
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int a,b,c;
    printf("enter the number 1:");
    scanf("%d",&a);
     printf("enter the number 2:");
    scanf("%d",&b);
     printf("enter the number 3:");
    scanf("%d",&c);
    if (a<b&&a<c){
   printf("%d is the smallest number",a);
    }
   else if (b<a&&b<c){
   printf("%d is the smallest number",b);
   }
   else
  printf("%d is the smallest number",c);			
	return 0;
}