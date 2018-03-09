#include <stdio.h>
#include<conio.h>

int main(void)
{
	int n,i, f1=1,f2=1,f3;
	scanf("%d",&n);
	printf("%d \n%d",f1,f2);
	for(i=1;i<n-1;i++)
	{
		
	
		f3=f1+f2;
		printf("\n%d",f3);
		f1=f2;
		f2=f3;
	}
getch();
}
