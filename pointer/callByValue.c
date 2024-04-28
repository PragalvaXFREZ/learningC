#include<stdio.h>
void value(int a, int b);
int main()
{
    int a=2, b=7;
    printf("The value of a '%d' b '%d' before calling func \n",a,b); 
    value (a,b); 
    printf("The value of a '%d' b '%d' after calling func \n",a,b);
}

void value(int a, int b)
{
    a++;
    b--;
    printf("The value of a '%d' b '%d' INSIDE THE FUNC \n",a,b); 
}