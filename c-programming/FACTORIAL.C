#include<stdio.h>
#include<conio.h>
void main()
{

int num,i;
int res=1;
clrscr();
printf("Enter a number to find Factorial :\n");
scanf("%d",&num);
for(i=num; i>=1; i--)
{
res=res*i;
}
printf("Factorial of %d = %d",num,res);

getch();
}
