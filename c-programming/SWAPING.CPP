#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,temp;

printf("Enter Two Number :\n");
scanf("%d %d",&a,&b);
printf("Before Swaping");
printf("\n a=%d \n b=%d",a,b);
printf("\n After Swaping");
temp=a;
a=b;
b=temp;
printf("\n a=%d \n b=%d",a,b);
getch();

}
