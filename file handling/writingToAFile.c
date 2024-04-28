#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*ptr;
    char name[20]="pragalva sapkota";
    ptr=fopen("hello.txt","w");
    if (ptr==NULL)
    {
        printf("There is error");
    }
    else
    {
        int i=0;
        while (name[i]!='\0')
        {
            fputc(name[i],ptr);
            i++;
        }
        return 0;
    }
    

}