#include<stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    for(int i=0;i<4;i++)
    {
        printf("%d",*(arr+i));
    }
    
    int *ptr = &arr[0];
    printf("\nAddress of array = %p %p %p",arr,&arr[0],&arr);
}
