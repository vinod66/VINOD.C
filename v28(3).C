#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void)
{
	int n,sum=0,a;
  clrscr();
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("%d",sum);
  getch();
	return 0;
}
