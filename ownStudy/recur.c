#include<stdio.h>
int recur(int number);
int main()
{
    int number, recursion;
    printf("enter the number");
    scanf("%d",&number);
    recursion=recur(number);
    printf("\n RECURSION IS:",recursion);
}
int recur(int number)
{
    return number*recur(number-1);
}
