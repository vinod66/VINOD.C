#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[5],b[5],c[3];
clrscr();
printf("\n enter the 1st array:");
for (i=0;i<3;i++)
{
printf("\n enter the values:");
scanf("%d",&a[i]);
}
printf("\n enter the 2nd array:");
for (i=0;i<3;i++)
{
printf ("\n enter the values:");
scanf("%d",&b[i]);
}
printf("addition of 2 array\n");
for(i=0;i<3;i++)
{
c[i]=a[i]+b[i];
printf("\n the sum of%d &%dis %d",a[i],b[i],c[i]);
}
getch();
}
