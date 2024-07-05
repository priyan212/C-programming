//Write a program to input the radius of a circle and calculates the area and perimeter of that circle.#include <stdio.h>
#include <stdio.h>


int main(void) {
    float r;
    float pi=3.14;
printf("Entr the radius of the circle:");
scanf("%f",&r);
printf("The perimeter is:%f\n",2*pi*r);
printf("The area is:%f",pi*r*r);			
	return 0;
}