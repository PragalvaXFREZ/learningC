#include<stdio.h>
int main()
{
    int number,num;
    printf("Enter the number to be checked");
    scanf("%d",&number);
    if (number<=1)
    {
        printf("%d is compositee",number);
        return 0;
    }
    for (int i = 2; i < number; i++)
    {
        if (number%i==0)
        {
            num=1;
        } 
        num=0;
    }
    if (num==0)
    {
        printf("%d is prime",number);
    }
    else
    {
        printf("%d is composite",number);
    }
    
    
    return 0;
}