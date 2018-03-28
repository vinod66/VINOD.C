#include <stdio.h>
#include<conio.h>
int main(void)
{
	int i,m;
  clrscr();
	char a[10];
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		printf("\n %c",a[i]);
	}
	getch();
}
