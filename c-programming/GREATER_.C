#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();

printf("Enter Two Number:\n");
scanf("%d%d",&a,&b);
if(a>b)
 {
 printf("%d is greater than %d",a,b);
 }
else
 {
 printf("%d is Greater than %d",b,a);
 }
getch();
}