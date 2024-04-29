#include<stdio.h>
int power(int base, int power);
int main()
{
    int number, remainder=1,org,n=0,sum=0;
    printf("Enter the number to be checked:");
    scanf("%d",&number);
    org=number;

    while (org!=0)
    {
        org/=10;
        ++n;
    }
    org=number;
    while (org!=0)
    {
        remainder=number%10;
        sum+=power(remainder,n);
        org=org/10;
    }
    if (sum==number)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
      
}
int power(int base, int power)

{
    int sum=1;
    while (power!=0)
    {
        sum=base*sum;
        --power;
    }
    return sum;
    
}