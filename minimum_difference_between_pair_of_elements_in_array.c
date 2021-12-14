#include <stdio.h>
#include <math.h>
 int main()
{ 
    int n,i,max,max2,difference;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter %d element :",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("1st largest is %d",max);
    for(i=0;i<n;i++){
        if(arr[i]==max){
            arr[i]=0;
        }
    }
    max2=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max2){
            max2=arr[i];
        }
    }
    printf("\n2st largest is %d\n",max2);
    difference=max-max2;
    if(difference<0){
        difference=difference*(-1);
    }
    printf("\nThe minimum diffrence is %d",difference);
    return 0;
}
