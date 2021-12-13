#include <stdio.h>
#include <math.h>
 int main()
{  
  int n,i,max;
  printf("Enter the size of array :");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++){
      printf("Enter %d element of array :",i);
      scanf("%d",&arr[i]);
  }
  max=arr[0];
  for(i=1;i<n;i++){
      if(arr[i]>max){
          max=arr[i];
      }
  }
  max++;
  int p=max;
  int brr[p];
  for(i=0;i<p;i++){
      brr[i]=0;
  }
  for(i=0;i<n;i++){
      brr[arr[i]]++;
  }
  printf("The frequency array is :\n\n");
  for(i=0;i<max;i++){
      printf("%d Came %d times.\n",i,brr[i]);
  }
  return 0;
}
