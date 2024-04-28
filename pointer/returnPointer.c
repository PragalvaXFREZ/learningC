//function returning pointer

#include<stdio.h>
int *func(int *a, int b, int c);
int main()
{
    int arr[5]={1,2,3,4,5}, *ptr=NULL;
    int n=0;
    ptr=func(arr,n,n+1);
    printf("The address of ptr is:%u \n",ptr);
    printf("The value of *ptr is '%u'\n",*ptr);
}
int *func(int *a, int b, int c)
{
    printf("The address of a is: %d\n",a);
    a=a+b+c+c;
    return a;
}