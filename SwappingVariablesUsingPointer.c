#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b) \
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
} 
void main() 
{
 int a, b;
 clrscr();
 printf("================================\n\n");
 printf("Swapping Variables Using Pointer\n\n");
 printf("================================\n\n");
 printf("\nEnter the first number : ");
 scanf("%d", &a);
 printf("\nEnter the Second number : ");
 scanf("%d", &b);
 printf("\nBefore Swapping ");
 printf("\nFirst number  : %d", a);
 printf("\nSecond number : %d", b);
 swap(&a, &b);
 printf("\nAfter Swapping");
 printf("\nFirst number  : %d", a);
 printf("\nSecond number : %d", b);
 getch();
}
