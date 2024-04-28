#include<stdio.h>
#include<string.h>
    struct Student{
        int age;
        char name[20];
        float marks;
    };
int main()
{
    struct Student st={18,"pragalva",80.88};
    struct Student *ptr=&st;
    printf("Address '%u'\n",&st);
    printf("Age: '%d'\n",ptr->age);
    printf("Name: '%s'\n",ptr->name);
    printf("Marks: '%.2f'\n",ptr->marks);

    //modifying the values
    ptr->age=22;
    strcpy(ptr->name,"dipan");
    ptr->marks=78.99;
    printf("\n-------------Modified Content----------------\n\n");
     printf("Address '%u'\n",ptr);
    printf("Age: '%d'\n",ptr->age);
    printf("Name: '%s'\n",ptr->name);
    printf("Marks: '%.2f'\n",ptr->marks);
}