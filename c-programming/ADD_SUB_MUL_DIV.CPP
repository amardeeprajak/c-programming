#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;

printf("Enter two number:");
scanf("%d %d",&a,&b);

printf("\n Addition of %d and %d is: %d ",a,b,a+b);
printf("\n Subtraction of %d and %d is: %d ",a,b,a-b);
printf("\n Multiplication of %d and %d is: %d ",a,b,a*b);
printf("\n Division of %d and %d is: %d ",a,b,a/b);
printf("\n Modulas of %d and %d is: %d ",a,b,a%b);
getch();
}