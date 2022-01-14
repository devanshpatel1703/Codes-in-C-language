#include <stdio.h>
int main()
{
   int n,max,min,i,minp,maxp;
   printf("Enter the size of array :");
   scanf("%d",&n);
   int array[n];
   for(i=0;i<n;i++){
      printf("Enter %d element of array :",i);
      scanf("%d",&array[i]);
   }
   printf("The old array is :\n");
   for(i=0;i<n;i++){
      printf("%d ",array[i]);
   } 
   min=array[0];
   max=array[0];
   for(i=1;i<n;i++){
      if(array[i]>max){
         max=array[i];
         maxp=i;
      }
      if(array[i]<min){
         min=array[i];
         minp=i;
      }
   }
   printf("\nThe maximum number is =%d at position %d\n",max,maxp);
   printf("The minimum number is =%d at position %d\n",min,minp);
   array[maxp]=array[maxp]+array[minp];
   array[minp]=array[maxp]-array[minp];
   array[maxp]=array[maxp]-array[minp];
   printf("The new array is :\n");
   for(i=0;i<n;i++){
      printf("%d ",array[i]);
   }  
}
