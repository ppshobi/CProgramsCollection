#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b;
 char op;
 clrscr();
 printf("=======================\n\n");
 printf("Arithmetic Operations\n\n");
 printf("=======================\n\n");
 printf("enter two numbers\n");
 scanf("%f%f",&a,&b);
 flushall();
 printf("enter the operator +,-,*,/\n");
 scanf("%c",&op);
 switch(op)
  {
   case '+':printf("a+b=%f",a+b);break;
   case '-':printf("a-b=%f",a-b);break;
   case '*':printf("a*b=%f",a*b);break;
   case '/':printf("a/b=%f",a/b);break;
   default:printf("invalid operator");break;
  }
 getch();
}
