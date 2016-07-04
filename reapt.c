#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100]={0},c,i;
clrscr();
printf("Enter the number:");
scanf("%d",&c);
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
b[a[i]]++;
}
for(i=0;i<100;i++)
{
if(b[i]>1)
{
printf("%d",i);
}
}
getch();
}
