//call by refrence function
//swapping numbers

#include<stdio.h>
void value(int *a, int *b, int *c);
int main()
{
    int a=22,b=27,c=23,*aa,*bb,*cc;
    
    printf("the value of a '%d'  b '%d' c '%d' before calling func \n",a,b,c);
    value(&a,&b,&c);
    printf("the value of a '%d' and b '%d' c '%d' AFTER calling func",a,b,c);

}
void value(int *a, int *b,int *c)
{
    int temp=*a,temp1=*c;
    (*a)=(*b);
    (*b)=temp1;
    (*c)=temp;
}