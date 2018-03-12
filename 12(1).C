#include <stdio.h>
#include<string.h>
#include<conio.h>
int main(void)
{
	int i;
  clrscr();
	char s1[10],s2[10];
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>s2[i])
		{
			printf("%s is greater",s1);
			break;
		}
		else if(s1[i]<s2[i])
		{
			printf("%s is greater",s2);
			break;
		}
		else
		{
			printf("both are equal");
			break;
		}
	}
	getch();
}
