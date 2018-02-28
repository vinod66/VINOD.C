#include <stdio.h>
#include<conio.h>

int main(void) {
	
	long int N,i,sum=0,A,D;
  clrscr();
	scanf("%ld",&N);
	scanf("%ld",&A);
	scanf("%ld",&D);
	for(i=N;i>=A;i=i-D)
	{
		sum=sum+i;
	}
	printf("%ld",sum);
	return 0;
  }
