// Find the largest number between 3 numbers

#include <stdio.h>
int main()
{
    int num1, num2, num3, largestNum;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("The largest number is : %d", num1);
    }

    if(num2 > num1 && num2 > num3)
    {
        printf("The largest number is : %d", num2);
    }

    if(num3 > num1 && num3 > num2)
    {
        printf("The largest number is : %d", num3);
    }
    return 0;
}