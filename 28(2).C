#include<stdio.h>
#include<conio.h>

int main()

{
  
  int n,a[20],i,j,m,temp;
  clrscr();
  float median;
  scanf("%d",&n);
  for(i=0;i<n;i++)
{
 
   scanf("%d",&a[i]);

  }

   for(i=0;i<n;i++)

  {
  
     for(j=i+1;j<n;j++)

    {

       if(a[i]>a[j])

   {
 
               
       temp=a[i];

        a[i]=a[j];

       a[j]=temp;

            
               
 
            }
             
   
        }
   
 }

if(n%2==0)

{
  
  m=n/2;
  
  median=(a[m-1]+a[m])/2;
  
  printf("%f",median);
    
}

    else
 
   {
   
     m=n/2;

        printf("%d",a[m]);

    }

return 0;
}
