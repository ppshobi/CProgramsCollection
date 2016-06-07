#include<stdio.h>
#include<conio.h>
void main()
{
int k,l,u,i;
clrscr();
printf("================================\n\n");
printf("Find Prime Numbers between limit\n\n");
printf("================================\n\n");
printf("enter the limits");
scanf("%d%d",&l,&u);
printf("prime number between limits are \n");
for(k=l;k<=u;k++)
{
 for(i=2;i<=k/2;i++)
 {
  if(k%i==0)
  break;
 }
 if(i>k/2)
 printf("%d\n",k);
}
getch();
}
