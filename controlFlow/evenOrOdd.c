//to check number is even or odd

#include<stdio.h>
int main()
{
    int num,chk;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}