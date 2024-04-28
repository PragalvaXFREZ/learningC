#include<stdio.h>
int main()
{
    int firstnum=0,secondnum=1,thirdnum,n;
    printf("Enter the value of nth term");
    scanf("%d",&n);
    if (n==1)
    {
        thirdnum=firstnum;
    }
    if (n==2)
    {
        thirdnum=secondnum;
    }
    
    for (int i = 3; i <= n; i++)
    {
        thirdnum=firstnum+secondnum;
        firstnum=secondnum;
        secondnum=thirdnum;
    }
    printf("The n th term of fibo series is: '%d'",thirdnum);
}