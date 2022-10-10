#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter a number to check num is positive or negative ;\n");
scanf("%d",&num);
if(num>0)
 {
 printf("%d is positive",num);
 }
else if(num<0)
 {
 printf("%d is negative",num);
 }
else
 {
 printf("The number is zero");
 }
getch();
}