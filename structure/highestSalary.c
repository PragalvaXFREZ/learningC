#include<stdio.h>
struct Employee
{
    char name[20];
    int age;
    float salary;
};

int main()
{
    int j=1;
struct Employee employees[3];
for (int i = 0; i < 3; i++)
{
    printf("Enter the name of the employee no '%d' :",j);
    scanf("%s",&employees[i].name);
    printf("Enter the age of the employee no '%d' :",j);
    scanf("%d",&employees[i].age);
    printf("Enter the salary of the employee no '%d' :",j);
    scanf("%f",&employees[i].salary);
    j++;
}
printf("\n\n");
float highest_salary=0;
for (int i = 0; i < 3; i++)
{
    if (employees[i].salary>=highest_salary)
    {
        highest_salary=employees[i].salary;
    }  

for (int i = 0; i < 3; i++)
{
    if (employees[i].salary==highest_salary)
    {
      
        printf(" the name of the highest paid employee is'%s' :",employees[i].name);
        printf(" the salary of the highest paid employee is'%f' :",employees[i].salary);
    }  
}
return 0;
}
}