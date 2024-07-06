//implementation of binary search algorihtm using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

//iterative method
/* int binary_search(int *arr,int n,int search_key){
    int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(*(arr+mid)==search_key){
            // printf("mid = %d\n",mid);
            return mid;
        }
        if(*(arr+mid)<search_key){
            l=mid+1;
        }
        if(*(arr+mid)>search_key){
            h=mid-1;
        }
    }
    return -1;
} */

int binary_search(int *p,int search_key,int l,int h){
    if(l>=h){
        return -1;
    }
    int mid = l+(h-l)/2;
    if (*(p+mid)==search_key) return mid;
    if (*(p+mid)<search_key) return binary_search(p,search_key,mid+1,h);
    if (*(p+mid)>search_key) return binary_search(p,search_key,l,mid-1);
}
/* int main(){
    int *p,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    int search_key;
    printf("Enter the eleemnt to be searched: ");
    scanf("%d",&search_key);
    if(binary_search(p,n,search_key)!=-1){
        printf("The element is found in %d index.\n",binary_search(p,n,search_key));
    }else{
        printf("Not found in the array.\n");
    }
    return 0;
} */
int main(){
    int *p,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    int search_key;
    printf("Enter the eleemnt to be searched: ");
    scanf("%d",&search_key);
    int index=binary_search(p,search_key,0,n-1);
    if(index!=-1){
        printf("The element is found in %d index.\n",index);
    }else{
        printf("Not found in the array.\n");
    }
    return 0;
}