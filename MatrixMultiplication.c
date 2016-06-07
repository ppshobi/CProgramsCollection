#include<conio.h>
#include<stdio.h>
void main()
{
 int a[10][20],b[10][10],p[10][10],i,j,k,r1,r2,c1,c2;
 clrscr();
 printf("================================\n\n");
 printf("Matrix Multiplication\n\n");
 printf("================================\n\n");
 printf("enter the order of the first matrix\n");
 scanf("%d%d",&r1,&c1);
 printf("enter the order of the second matrix\n");
 scanf("%d%d",&r2,&c2);
 if(r1==r2&&c1==c2)
 {
  printf("Enter The elements of first matrix\n");
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   scanf("%d",&a[i][j]);
  }
  printf("Enter The elements of second matrix\n");
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   scanf("%d",&b[i][j]);
  }
//multiplication
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   p[i][j]=0;
   for(k=0;k<c2;k++)
    p[i][j]=p[i][j]+(a[i][k]*b[k][j]);
  }
 }
 //printing resultant matrix
 printf("\nThe Resultant matrix\n");
 for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
    {printf("%d\t",p[i][j]);}
  printf("\n");
  }

 }
 else
 {
  printf("Not a square matrix");
 }
 getch();
}
