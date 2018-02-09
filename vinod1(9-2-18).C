#include<stdio.h>
#include<conio.h>
int main()
{
int up,low,i,k=0;
printf("enter the lower limit  ");
scanf("%d",&low);
printf("enter the upper limit  ");
scanf("%d",&up);
for(i=low;i<=up;i++)
{
  if(i%2==0)
    printf("\n %d",i);
}
getch();
return 0;
}

