#include<stdio.h>
#include<conio.h>
int main ()
{
int n,i,fact=1;
clrscr();
scanf("%d,&n");
for(i=1;i<=n;i++)
{fact=fact*i;}
printf("%d,fact");
return 0;
getch();
}
