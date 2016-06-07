#include<stdio.h>
#include<conio.h>
void main()
{
 int l,u,k,rem,sum,temp;
 clrscr();
printf("================================\n\n");
printf("Finding Armstrong Numbers within limit\n\n");
printf("================================\n\n");
printf("Enter Lower limit & Upper Limit\n");
scanf("%d%d",&l,&u);
for(k=l;k<=u;k++)
 {
  sum=0;
  temp=k;
  while(temp>0)
  {
   rem = temp%10;
   sum = sum+(rem*rem*rem);
   temp = temp/10;
  }
  if(sum==k)
   printf("\n%d",k);
 }
 getch();
}
