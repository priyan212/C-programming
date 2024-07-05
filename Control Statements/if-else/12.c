//Write a program to input any character and check whether it is a vowel or not(using if statement and logical OR).
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    char a,i,e,o,u,A,I,E,O,U,L;
    printf("enter the LETTER:");
    scanf("%C",&L);
    if (L=='a'||L=='i'||L=='e'||L=='o'||L=='u'||L=='A'||L=='I'||L=='E'||L=='O'||L=='U')
   printf("GIVEN LETTER IS A VOWEL");
   else
  {printf("GIVEN LETTER IS A CONSONANT");}	
	return 0;
}