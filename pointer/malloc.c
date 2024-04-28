//dynamically allocating memory
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    if (arr==NULL)
    {
        printf("Memory Location unsufficent, program Failed");
    }
    else
    printf("Enter '%d' integers",size);
    {
        for (int i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("\n The entered integers");
        for (int i = 0; i < size; i++)
        {
            printf("%d\n",arr[i]);
        }
        
    }
}