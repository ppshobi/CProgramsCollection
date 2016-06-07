#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("================================\n\n");
 printf("ODD or EVEN Using Bitwise Operator\n\n");
 printf("================================\n\n");
 printf("Enter an integer\n");
 scanf("%d", &n);
 if(n&1)
  printf("Odd\n");
 else
  printf("Even\n");
 getch();
}
