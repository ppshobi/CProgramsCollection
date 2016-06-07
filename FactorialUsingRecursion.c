#include<stdio.h>
#include<conio.h>
void main()
{
 long fact(int);
 int n;
 long s;
 clrscr();
 printf("================================\n\n");
 printf("Factorial Using Recursion\n\n");
 printf("================================\n\n");
 printf("enter number");
 scanf("%d",&n);
 s=fact(n);
 printf("factorial=%d",s);
 getch();
}
long fact(int a)
{
 if(a<=1)
   return 1;
 else
  return a*fact(a-1);
}
