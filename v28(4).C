#include <stdio.h>
#include<conio.h>

int main(void) 
{
	int n;
  clrscr();
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d",n);
	}
	else
	printf("%d",n-1);
	return 0;
  getch();
}
