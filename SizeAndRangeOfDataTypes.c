#include<conio.h>
#include<stdio.h>
#include<limits.h>
void main()
{
 clrscr();
 printf("=====================================\n\n");
 printf("Size And Range Of Data Types \n\n");
 printf("=====================================\n\n");
 printf("\n Size of character %d\n\n Range  : %d to %d",sizeof(char),CHAR_MIN,CHAR_MAX);
 printf("\n Size of Unsigned character : %d\n\n  Range  :  %d to %d",sizeof(char),0,UCHAR_MAX);
 printf("\n Size of short integer: %d\n\n Range : %d to %d",sizeof(short),SHRT_MIN,SHRT_MAX);
 printf("\n Size of integer : %d\n\n Range : %d to %d",sizeof(int),INT_MIN,INT_MAX);
 printf("\n Size of unsigned integer : %d\n\n Range : %d to %ld",sizeof(int),0,UINT_MAX);
 printf("\n Size of LONG integer : %d\n\n Range : %ld to %ld",sizeof(long),LONG_MIN,LONG_MAX);
 printf("\n Size of UNSIGNED LONG integer : %d\n\n Range : %d to %lu",sizeof(long),0,ULONG_MAX);
 printf("\n Size of float : %d\n\n",sizeof(float));
 printf("\n Size of double : %d",sizeof(double));
 getch();
}
