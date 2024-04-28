//void pointer is an exception pointer that can point to any datatype

#include<stdio.h>
int main()
{
    int num1=2;
    char name= 'h';
    float marks=99.99;
    void *ptr;
    ptr=&num1;
    printf("The value of num 1 is :'%d'\n",*(int*)ptr);
    ptr=&name;
    printf("The name  is :'%c'\n",*(char*)ptr);
    ptr=&marks;
    printf("The value of num 1 is :'%.2f'\n",*(float*)ptr);
}