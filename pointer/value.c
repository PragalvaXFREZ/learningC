#include<stdio.h>
int main()
{
    int num=3232, *numR;
    float numb=22.22, *numbR;
    char ch='a', *chR;
    numR=&num;
    numbR=&numb;
    chR=&ch;
    printf("The size of numR is : '%d' \n ",sizeof(numR));
    printf("The size of numbR is : '%d' \n ",sizeof(numbR));
    printf("The size of chR is : '%d' \n ",sizeof(chR));
    printf("------------------------------\n-----------------------\n");
    printf("The size of num is : '%d' \n ",sizeof(num));
    printf("The size of numb is : '%d' \n ",sizeof(numb));
    printf("The size of ch is : '%d' \n ",sizeof(ch));
}