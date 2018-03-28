
#include <stdio.h>
#include<conio.h>

int main(void) 
{
	int n,m,t;
  clrscr();
	scanf("%d %d",&n,&m);
	t=n*m;
	if(t%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	getch();
}
