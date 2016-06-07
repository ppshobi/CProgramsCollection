#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a,b,c,d,r1,r2;
 clrscr();
 printf("=====================================\n\n");
 printf("Finding Roots of a quadratic Equation\n\n");
 printf("=====================================\n\n");
 printf("enter the constants\n");
 scanf("%d%d%d",&a,&b,&c);
 d=b*b-4*a*c;
 if(d>0)
 {
 r1=(-b+sqrt(d))/2*a;
 r2=(-b-sqrt(d))/2*a;
 printf("two distinct roots are %d and %d",r1,r2);
 }
 else if(d==0)
 {
  r1=r2=-b/2*a;
  printf("equal roots=%d",r1);
 }
 else
 {
  r1=-b/2*a;
  r2=sqrt(-d)/2*a;
  printf("imaginary roots=%d+i%d and %d-i%d",r1,r2,r1,r2);
 }
 getch();
}
