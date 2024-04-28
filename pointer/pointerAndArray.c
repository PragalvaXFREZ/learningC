//pointer and array in c

#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    printf("The name of the array arr:'%u' \n"),arr;
    printf("The address of the first element of arr:'%u' \n"),&arr[0];
    // The name of the array behaves like pointer and '[]'behaves as an operator
    // for derefrencing
    printf("\n %d",arr[2]);
    printf("\n %d",*(arr+2));
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("%d",arr[i]);

    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",*(ptr+i));
    }
   
}