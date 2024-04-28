//array of pointers

#include<stdio.h>
int main()
{
    int *arr[5];
    int a=20,b=23,c=24,d=25,e=27;
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    arr[3]=&d;
    arr[4]=&e;
    for (int i = 0; i < 4; i++)
    {
        *arr[i]+=10;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of array is: %d \n",*arr[i]);
    }
    printf("the new value of a='%d' b='%d'",a,b);
    
    
}