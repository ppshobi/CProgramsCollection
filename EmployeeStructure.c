#include<stdio.h>
#include<conio.h>
struct employee
{
char name[25];
int age,salary;
char desig[50];
};
void main()
{
 struct employee emp1;
 clrscr();
 printf("================================\n\n");
 printf("Employee Structure\n\n");
 printf("================================\n\n");
 printf("Enter Name of Employee\n");
 scanf("%s",&emp1.name);
 printf("Enter age of employee\n");
 scanf("%d",&emp1.age);
 printf("Enter Salary\n");
 scanf("%d",&emp1.salary);
 printf("Enter Designation\n");
 scanf("%s",&emp1.desig);
 printf(" Name = %s,\n Age=%d \n designation = %s \n salary = %d",
          emp1.name, emp1.age, emp1.desig,emp1.salary);
 getch();
}
