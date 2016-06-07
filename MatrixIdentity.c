#include<stdio.h>
#include<conio.h>
void main()
{
int m[10][10],r,c,i,j,flag=0;
clrscr();
printf("================================\n\n");
printf("Find Weather a Matrix is Identity\n\n");
printf("================================\n\n");
printf("Enter Rows and Number of Coloumns\n");
scanf("%d%d",&r,&c);
if(r==c)
{
printf("Enter The matrix");
 for(i=0;i<c;i++)
  for(j=0;j<c;j++)
   scanf("%d",&m[i][j]);

   //reading finished
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  if((m[i][i]!=1)||(i!=j && m[i][j]!=0))
  {
   flag=1;
   break;
  }
 }
 if(flag==0)
  printf("Identity Matrix");
 else
  printf("Not Identity Matrix");
}
else
  printf("Not a Squre matrix");

getch();
}
