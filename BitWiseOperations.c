#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
 int a,b,ch,result;
 void dectobin(int);
 int bintodec(int);
 clrscr();
 printf("==================\n\n");
 printf("Bitwise Operations\n\n");
 printf("==================\n\n");
 printf("Menu\n");
 printf("====\n");
 printf("\n1.AND\n2.OR\n3.XOR\n4.Left shift\n5.Right Shift");
 printf("\nEnter Choice\n");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:printf("\nEnter two Numbers in Binary form\n");
         scanf("%d%d",&a,&b);
         a = bintodec(a);
         b = bintodec(b);
         result=a&b;
         dectobin(result);
         break;
  case 2:printf("\nEnter two Numbers in Binary form\n");
         scanf("%d%d",&a,&b);
         a = bintodec(a);
         b = bintodec(b);
         result=a|b;
         dectobin(result);
         break;
  case 3:printf("\nEnter two Numbers in Binary form\n");
         scanf("%d%d",&a,&b);
         a = bintodec(a);
         b = bintodec(b);
         result=a^b;
         dectobin(result);  
         break;
  case 4:printf("\nEnter a Number in Binary form\n");
         scanf("%d",&a);
         a = bintodec(a);
         printf("\nEnter Postions to be shifted\n");
         scanf("%d",&b);
         result=a<<b;
         dectobin(result);
         break;
  case 5:printf("\nEnter a Number in Binary form\n");
         scanf("%d",&a);
         a = bintodec(a);
         printf("\nEnter Postions to be shifted\n");
         scanf("%d",&b);
         result=a>>b;
         dectobin(result);
         break;
 }

}
int bintodec(int n)
{
 int rem,dec=0;
 float i=0;
 while(n>0)
 {
  rem=n%10;
  dec=dec+(rem*pow(2,i));
  i=i+1;
  n=n/10;
 }
 return dec;
}

void dectobin(int n)
{
 int a[10],i=0;
 while(n>0)
 {
  a[i]=n%2;
  n=n/2;
  i++;
 }
 printf("\nResult = ");
 for(i--;i>=0;i--)
  printf("%d",a[i] );
 getch();
}
