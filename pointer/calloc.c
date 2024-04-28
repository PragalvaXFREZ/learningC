#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *p,n;
   printf("Enter the value of n:");
   scanf("%d",&n);
   p=(int*)calloc(n,sizeof(int));
   printf("\n Now initializing the value \n");
   for (int i = 0; i < n; i++)
   {
    scanf("%d",p+i);
   }
   for (int i = 0; i < n; i++)
   {
    printf(" \n%d",*(p+i));
   }
   free(p);


}