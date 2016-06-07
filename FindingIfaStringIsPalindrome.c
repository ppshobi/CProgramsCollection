#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s[20];
  int l,i,j;
  clrscr();
  printf("================================\n\n");
  printf("Finding if a String Is Palindrome\n\n");
  printf("================================\n\n");
  printf("enter the string\n");
  gets(s);
  l=strlen(s);
  for(i=0,j=l-1;i<l/2;i++,j--)
   {
    if (s[i]!=s[j])
     break;
   }
  if(i==l/2)
    printf("\nPalindrome");
  else
    printf("\nNot palindrome");
 getch();
}
