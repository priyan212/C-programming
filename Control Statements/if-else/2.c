//Write a program to input any number and print “correct” if it is 10 else print “Incorrect”.
#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if (a==10)
    {
        printf("correct");
    }
    else
    printf("incorrect");				
	return 0;
}