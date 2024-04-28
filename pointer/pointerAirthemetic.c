// overview of how increment decrement works

#include<stdio.h>
int main()
{
    int num=3232, *numR;
    numR=&num;
    printf("The value of numR is : %u\n",numR);
    numR++;
    printf("The value of numR is : %u\n",numR);
    numR=numR+2;
    printf("The value of numR is : %u\n",numR);
    numR=numR-3;
    printf("The value of numR is : %u\n",numR);

}
