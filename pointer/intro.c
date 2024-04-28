//overview of how pointers work

#include<stdio.h>
int main()
{
    int num=20,*numC;
    numC=&num;
    printf("The number is '%d' \n",numC);
    printf("The number is '%d' \n",&numC);
    printf("The number is '%d' \n",*numC);
    printf("The number is '%d' \n",num);
}