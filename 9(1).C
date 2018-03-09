#include <stdio.h>

#include<string.h>

int main(void)
{

	int i,k;
  
  clrscr();
  
	scanf("%d %d",&i,&k);
  
	i=i^k;
  
	k=i^k;
  
	i=i^k;
  
	printf("%d %d",i,k);
  
	getch();
  
  }
