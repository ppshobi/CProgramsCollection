#include<stdio.h>
#include<conio.h>

void main()
{
 FILE *fi;
 char c;
 clrscr();
 printf("================================\n\n");
 printf("File Writing and Reading\n\n");
 printf("================================\n\n");
 printf("\nDATA INPUT\n");
 fi = fopen("input.txt","w");
 while((c=getchar())!=EOF)
 	putc(c,fi);
 fclose(fi);
 printf("\nDATA OUTPUT\n");
 fi = fopen("input.txt","r");
 while((c=getc(fi))!=EOF)
 	printf("%c",c );
 fclose(fi);
 getch();
}
