#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*ptr;
    char num[20];
    ptr=fopen("world.txt","w");
    if (ptr==NULL)
    {
        printf("There is error");
    }
    else
    {
        
        printf("enter a string");
        gets(num);
        fputs(num,ptr);
    }
}