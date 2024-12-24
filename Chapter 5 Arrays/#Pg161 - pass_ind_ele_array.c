#include<stdio.h>
void func1(int num)
{
    printf("\nThe value = %d",num);
}
void func2(int *num)
{
    printf("\nThe value = %d",*num);
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    func1(arr[2]);
    func2(&arr[1]);
}