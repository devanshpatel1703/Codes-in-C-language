#include <stdio.h>
int main()
{
   int n,pos,ele,j,i,e,temp;
   printf("Enter the size of array :");
   scanf("%d",&n);
   temp=n;
   int array[n+100];
   for(i=0;i<n;i++){
      printf("Enter %d element of array :",i);
      scanf("%d",&array[i]);
   }
   printf("Enter E (Number of elements you want to insert) :");
   scanf("%d",&e);
   int position[e],element[e];
   for(i=0;i<e;i++){
      printf("Enter %d position and element :",i+1);
      scanf("%d %d",&position[i],&element[i]);
   }
   for(i=0;i<e;i++){
      pos=position[i];
      ele=element[i];
      for(j=n-1;j>=pos;j--){
         array[j+1]=array[j];
      }
      array[pos]=ele;
      n++;
   }
   printf("The updated array is :\n");
   for(i=0;i<temp+e;i++){
      printf("%d ",array[i]);
   }
   return 0;
}
