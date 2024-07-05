//Write a program to input any float number and round off of the number
#include<stdio.h>
int main(){
    float f;
    printf("Enter any float: ");
    scanf("%f",&f);
    int x=f;
    f-=x;
    f>=0.5?printf("%d\n",++x):printf("%d\n",x);
    return 0;
}