#include<stdio.h>
int main()
{
    int num,paLIN=0,rem,store;
    printf("Enter the number to be checked");
    scanf("%d",&num);
    store=num;
    while (num!=0)
    {
        rem=num%10;
        paLIN=paLIN*10+rem;
        num=num/10;
    }
    if (paLIN==store)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
    
    
}