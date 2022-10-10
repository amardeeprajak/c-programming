#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("Enter Two Number To Swap:\n");
scanf("%d%d",&a,&b);
printf("Before Swaping:\n");
printf("A=%d \nB=%d",a,b);
printf("\nAfter Swaping:\n");
a=a+b;
b=a-b;
a=a-b;
printf("A=%d \nB=%d",a,b);
getch();
}