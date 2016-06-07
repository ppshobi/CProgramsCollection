#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
printf("================================\n\n");
printf("Finding if a Number is Prime or Not\n\n");
printf("================================\n\n");
printf("Enter a Number\n");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
 {
  if(n%i==0)
  {
    flag=1;
    break;
  }
 }

if(flag==1)
 printf("Number is not prime");
else
 printf("Number is prime");
getch();
}
