//code to understand how return is done in function

#include<stdio.h>
int addNum(int x, int y);
int main()
{
    int num1, num2,sum;
    printf (" Enter two numbers");
    scanf("%d %d",&num1,&num2);
    sum=addNum(num1,num2);
    printf("%d",sum);

}
int addNum(int x, int y)
{
    int sum=x+y;
    return sum;
}