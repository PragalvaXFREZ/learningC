#include<stdio.h>
int main()
{
    int arr[3]={1,2,3};
    int *ptrarr[3];
    for (int i = 0; i < 3; i++)
    {
        ptrarr[i]=&arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The memmory location of ptrarr[%d]:'%u' \n",i,&ptrarr[i]);
        printf("The value stored in ptrarr is:'%u' \n ",ptrarr[i]);
        printf("The memory location of array '%u'\n",&arr[i]);
        printf("The  derefrenced value of each are:'%d' \n \n ",*ptrarr[i]);

    }
    
}