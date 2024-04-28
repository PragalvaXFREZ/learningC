//pointer to pointer

#include<stdio.h>
int main()
{
    int num=20,*ptr,**ptrr;
    ptr=&num;
    ptrr=&ptr;
    printf("The address of ptr: '%u' \n",ptr);
    printf("The address of ptrr: '%u' \n",ptr);
    printf("The value of ptr: '%u' \n",*ptr);
    printf("The value of ptrr: '%u' \n",**ptrr);
}