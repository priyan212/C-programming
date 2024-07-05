//swap with 3rd variable
#include<stdio.h>
int main()
{
  int a,b,c;
  a=12;
  b=13;
  c=a+b;
  a=c-a;
  b=c-b;
  printf("a=%d ",a);
  printf("b=%d",b);


    return 0;
} 