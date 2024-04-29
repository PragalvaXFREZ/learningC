//50 books input and print the name of book named 'XYZ'
#include<stdio.h>
#include<stdlib.h>
struct Book
{
    char name[30];
    char member[30];
    char author[30];
};

int main()
{
    int count=1;
    struct Book books[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the book name of the %d book",count);
        scanf("%s",&books[i].name);
        printf("Enter the member name of the %d book",count);
        scanf("%s",&books[i].member);
        printf("Enter the name of the author of %d book",count);
        scanf("%s",&books[i].author);
        count++;
    }
    for (int i = 0; i < 5; i++)
    {
      if   (strcmp(books[i].name,"XYZ")==0)
      {
        printf("%s\n",books[i].name);
        printf("%s\n",books[i].author);
        printf("%s\n",books[i].member);
      }
    }
     
}
