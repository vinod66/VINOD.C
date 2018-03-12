#include <stdio.h>
#include<conio.h>

int main(void) 
{
	int n;
  clrscr();
	scanf("%d",&n);
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==n)
		{
			printf("\n yes");
		}
	}
	getch();
}
