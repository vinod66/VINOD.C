#include<stdio.h>
#include<conio.h>
int main()
{
int m.,l,n;
clrscr();
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(int j=1;j<n;j++)
{
if(m<a[j])
{
a[j]=m;
l=j+1;
}
printf("the location is ==%dthe min value is==%d",m,l);
}
return 0;
getch();
}
