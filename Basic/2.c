//calculator
#include<stdio.h>
int main()
{
    int a,b,n,z;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter 1 for sum,2 for difference,3 for multiplication,4 for division :");
    scanf("%d",&n);
 switch (n)
{
    case 1:
z=a+b;
printf("the sum is: %d",z);
break;
    case 2:
z=a-b;
printf("the difference is: %d",z);
break;
    case 3:
z=a*b;
printf("the result is: %d",z);
break;
    case 4:
z=a/b;
printf("the quotient is: %d",z);
break;
   default:
 printf("Enter a valid option!!!!");
break;
 }
    return 0;
} 