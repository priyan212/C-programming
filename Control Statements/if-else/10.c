//Write a program to input three numbers and find the smallest one (using nested if else). 
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
 if (a>b)
 { if(a>c)
 printf("%d is the biggest",a);
 else 
 printf("%d is the biggest",c);
 }
 else if(b>a)
{ if(b>c)
printf("%d is the biggest",b);
else 
printf("%d is the biggest",c);
}
}