//Write a program to input any character and check either it is capital letter or it is a small letter or it is a number.
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    char ch,A,Z,a,z;
    printf("enter the LETTER:");
    scanf("%C",&ch);
    if (ch>='A'&&ch<='Z')
    printf("UPPERCASSE");
    else if(ch>='a'&&ch<='z')
    printf("LOWERCASE");
    else
    printf("its a number or invalid input");}