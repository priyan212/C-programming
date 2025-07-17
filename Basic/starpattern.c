// Online C compiler to run C program online
#include <stdio.h>

int main() {
    for(int row=1;row<=4;row++){
        for(int i=1;i<=4-row;i++)
        printf(" ");
        for(int j=1;j<=row*2-1;j++)
        printf("*"); 
            printf("\n"); 
    }

    return 0;
}
