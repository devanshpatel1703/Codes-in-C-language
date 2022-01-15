#include <stdio.h>
int main()
{
   int n,t=0,i,count=0,j=0,num;
   printf("Enter the size of array :");
   scanf("%d",&n);
   int array[n];
   for(i=0;i<n;i++){
      printf("Enter %d element of array :",i);
      scanf("%d",&array[i]);
   }
   printf("Enter the element you want to search in array :");
   scanf("%d",&num);
   for(i=0;i<n;i++){
      if(array[i]==num){
         count++;
      }
   }
   if(count==0){
      printf("Not found anywhere.");
      return 0;
   }
   int counter[count];
   for(i=0;i<n;i++){
      if(array[i]==num){
         counter[j]=i;
         j++;
      }
   }
   printf("The element found in the following positions :\n");
   for(i=0;i<count;i++){
      printf("%d ",counter[i]);
   }
   return 0;
}
