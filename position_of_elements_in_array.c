#include <stdio.h>
int main()
{
   int n,t=0,i,num;
   printf("Enter the size of array :");
   scanf("%d",&n);
   int array[n];
   for(i=0;i<n;i++){
      printf("Enter %d element of array :",i);
      scanf("%d",&array[i]);
   }
   printf("Enter the element you want to search in array :");
   scanf("%d",&num);
   printf("The positions are :\n");
   for(i=0;i<n;i++){
      if(array[i]==num){
         printf("%d ",i);
         t=1;
      }
   }
   if(t==0){
      printf("Not found.");
   }
   return 0;
}
