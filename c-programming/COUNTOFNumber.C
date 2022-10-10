#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num;
int count=0;
printf("Enter Number :");
scanf("%d",&num);
while(num>0)
{
num=num/10;
count=count+1;
}
printf("count is = %d",count);
getch();
}