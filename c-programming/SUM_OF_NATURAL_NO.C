#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum;
clrscr();
printf("Enter a number ;\n");
scanf("%d",&num);
sum=num*(num+1)/2;
printf("The sum of N natural number is: %d",sum);
getch();
}