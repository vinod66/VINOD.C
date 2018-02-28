#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[20],i=0,min,temp;
clrscr();
printf("enter array limit between 1 to 10000");
scanf("%d",&n);
  if(!(n>=1)&&(n<=10000))
  {
    printf("limit only with in 1 to 10000");
  }
  else
  {
printf("enter numbers");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

sort(0,n);

printf("sorted array is");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
  }
getch();
}
void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
      getch();
   }   
}
