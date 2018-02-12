#include<stdio.h>
#include<conio.h>
int main(void)
{
int n,temp,sum=0,rem=0;
clrscr();
scanf("%d,&n");
temp=n;
while(n!=0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(sum==temp)
printf("amstrong number");
else
printf("not an armstrong number");
return(0);
getch();
}
