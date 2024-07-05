//Write a program to input a temperature in celsius and converts that into fahrenheit
#include <stdio.h>
int main() {
    float f,c;
    printf("Temparature in celcius:");
    scanf("%f",&c);
	f=(c*1.8)+32;
    printf("the temparature in farenhiet:%f",f)	;	
	return 0;
}