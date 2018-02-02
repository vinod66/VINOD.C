#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a>='a' && a<='z')||(a>='A' && a<='Z'))
    {
        printf("alphapet");
    }
    else
    {
        printf("not a alphapet");
    }
    return 0;
}
