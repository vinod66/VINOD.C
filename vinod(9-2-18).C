#include <stdio.h>
#include <conio.h>

int main() 

{

int start,end,i=0;

clrscr();

printf("enter the  starting number");

scanf("%d",&start);

printf("enter the ending number");

scanf("%d",&end);

for(i=start;i<=end;i++)

{

if(i%2!=0)

{

printf("%d",i);

}

}

getch();

return 0;

}
