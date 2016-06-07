#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],p,i,n,d,j;
 clrscr();
 printf("===================================\n\n");
 printf("Search | Delete | Modify Operations\n\n");
 printf("===================================\n\n");
 printf("Enter No of elements\n");
 scanf("%d",&n);
 printf("\nEnter elements\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("\nYou have Entered\n");
 for (i = 0; i<n; i++)
  printf("%d\t",a[i]);
 printf("\nEnter item to be Searched\n");
 scanf("%d",&p);
 for (i=0;i<n; i++)
 {
  if (a[i]==p)
  {
   printf("\n%d is present",p);
   break;
  }
 }	
 if (i==n)
  printf("\n Item is not present");
 
 printf("\nEnter item to be modified\n");
 scanf("%d",&p);
 for (i=0;i<n; i++)
 {
  if (a[i]==p)
  {
   printf("\nEnter New Number",p);
   scanf("%d",&d);
   a[i]=d;
   break; 
  }
 }
 printf("\nEnter item to be deleted\n");	
 scanf("%d",&p);
 for (i=0;i<n; i++)
 {
  if (a[i]==p)
  {
   for (j = i; j<n; j++)
   {
    a[j]=a[j+1];
   }
   n=n-1;
   break;
  }
 }
 printf("\n Array After modification\n");
 for (i=0;i<n;i++)
  printf("%d\t",a[i]);
 getch();
}
