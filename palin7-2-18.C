#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
clrscr();
printf("enter the number");
scanf("%d",&a);
b=a/100;
c=(a-(1*100))/10;
d=(a-(1*100+c*10));
e=(d*100+c*10+b*1);
if(a==e)
printf("%d its palindrom");
else
printf("it not palindrom");
getch();
return 0
}

 
