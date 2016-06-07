#include<stdio.h>
#include<conio.h>
void main()
{
 int i,count=0;
 char str[100];
 clrscr();
 printf("========================\n\n");
 printf("Count No of Vowels in a String\n\n");
 printf("========================\n\n");
 printf("Enter the string\n");
 gets(str);
 for(i=0;str[i]!='\0';i++)
  {
   switch(str[i])
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':count++;break;
   }
  }
 printf("No of Vowels in the string=%d",count);
 getch();
}
