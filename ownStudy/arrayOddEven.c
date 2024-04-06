#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int countE=0, countO=0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]%2==0)
        {
            countE++;
        }
        else
        {
            countO++;
        }
        
    }
    printf("%d \n",countE);
    printf("%d \n",countO);
    
}