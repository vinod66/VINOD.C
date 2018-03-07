include <stdio.h>

#include<string.h>

int main()

{

	char str[50];
  
	int l=strlen(str);
  
	int count=0;
  
  clscr();
  
	for(int i=0;i<=l;i++)
  
	{
  
		if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
    
		{
    
			count=count+1;
      
		}
    
}

	printf("The total no of numeric characters in the String are %d",count);
  
	return 0;
  
  getch();
}
