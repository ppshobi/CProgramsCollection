#include<stdio.h>
#include<conio.h>
void main()
{
 float f,c;
 clrscr();
 printf("================================\n\n");
 printf("Fahrenheit to Celsius Conversion\n\n");
 printf("================================\n\n");
 printf("Enter the Temparature in fahrenheit\n");
 scanf("%f",&f);
 c = (f-32)*5/9;
 printf("Temparature in Celsius = %f",c);
 getch();
}
