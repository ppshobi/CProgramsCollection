#include<stdio.h>
#include<conio.h>
void main()
{
 int large, slarge, a,b,c;
 clrscr();
 printf("================================\n\n");
 printf("Finding Largest and Second largest Among 3 Nos\n\n");
 printf("================================\n\n");
 printf("Enter 3 Numbers");
 scanf("%d%d%d",&a,&b,&c);
 if((a>b)&&(a>c))
 {
  large=a;
  if(b>c)
   slarge=b;
  else
   slarge=c;
 }
 else if((b>c)&&(b>a))
 {
  large=b;
  if(a>c)
   slarge=a;
  else
   slarge=c;
 }
 else
 {
  large=c;
  if(b>c)
   slarge=b;
  else
   slarge=c;
 }
 printf("Large = %d, Second Large =%d", large,slarge);
 getch();
}
