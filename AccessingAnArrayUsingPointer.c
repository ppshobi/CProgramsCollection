#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n;
	int *p;
	printf("================================\n\n");
	printf("Accessing array using Pointer\n\n");
	printf("================================\n\n");
	printf("Enter no of elements in Array\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
	p=a;
	printf("Elements in array Accessed by pointer\n");
	printf("=====================================\n\n");
	for(i=0;i<n;i++)
	  printf("%d\n",*(p+i));
	getch();
}
