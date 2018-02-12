#include<stdio.h>
#include<conio.h>

int main()
{
int n,a,b,i,count;
clrscr();
printf("enter the two limits");
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
printf("%d\n",i);
}
getch();
return(0);
}
