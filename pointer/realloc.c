#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    printf("Enter the value of integer");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    p=(int*)realloc(p,n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p+1);
    }
    
}