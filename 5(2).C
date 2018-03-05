#include <stdio.h>

#include<string.h>

int main(void)

{
	char a[50];
  
	int i,count=0,m;
  
  clrscr();
  
	scanf("%s",a);
  
	m=strlen(a);
  
	for(i=0;i<m;i++)
  
	{
  
		if(a[i]!=' ')
    
		count++;	
    
	}
  
	printf("%d",count);
  
  }
