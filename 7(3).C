#include <stdio.h>
#include<string.h>
int main(void)
{
	char str[50];
	gets(str);
  clrscr();
	int counter,count=0,countSpaces;
	for(counter=0;str[counter]!='\0';counter++)
	{
	if((str[counter]>='0' && str[counter]<='9')
	|| (str[counter]>='A' && str[counter]<='Z')
	|| (str[counter]>='a' && str[counter]<='z')
          || str[counter]==' ' || str[counter]== '.')
            countSpaces++;
          else
            count++;
	}
	printf("%d",count);
	getch();
}
