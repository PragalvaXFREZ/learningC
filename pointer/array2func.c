//passing array to a function

#include<stdio.h>
void func (int a[]);
int main()
{
    int arr[5]={1,2,3,4,5};
    func(arr);
    printf("\n-------PRINTING AFTER FUNCTION IS CALLED------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
void func (int a[])
{
    for (int i = 0; i < 5; i++)
    {
        a[i]+=10;
    }
    
}