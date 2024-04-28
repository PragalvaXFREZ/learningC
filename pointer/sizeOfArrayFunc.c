//program to show that when an array is passed to the function, the receiving argument is declared as pointer

#include<stdio.h>
void func (int a[]);
int main()
{
    int arr[5]={1,2,3,4,5,};
    printf("The size of array is '%d' \n",sizeof(arr));
    func(arr);
}
void func (int a[])
{
    printf("The size of array a is '%d'",sizeof(a));
}
