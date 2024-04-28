// increment decrement part 2
// when you decrease/increase one it moves from 4 bits

#include<stdio.h>
int main()
{
    int num=20, *p1;
    p1=&num;
    printf("The value of p1 is '%u' \n",p1);
    printf("The value of p1 is '%u' \n",++p1);
    printf("The value of p1 is '%u' \n",p1++);
    printf("The value of p1 is '%u' \n",--p1);
    printf("The value of p1 is '%u' \n",p1--);
    printf("The value of p1 is '%u' \n",p1);
    
}