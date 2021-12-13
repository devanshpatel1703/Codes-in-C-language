#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int T,i,max,min,N,m=0,j,temp,dup;
    printf("Enter the number of test cases :");
    scanf("%d",&T);
    temp=T;
    dup=T;
    int brr[T];
    for(i=1;i<=dup;i++){
        printf("Enter the size of array :");
        scanf("%d",&N);
        int arr[N];
        for(j=0;j<N;j++){
            scanf("%d",&arr[j]);
        }
        min=arr[0];
        max=arr[0];
        for(j=1;j<N;j++){
            if(arr[j]>max){
                max=arr[j];
            }
            if(arr[j]<min){
                min=arr[j];
            }
        }
        brr[m]=max-min;
        m++;
    }
    printf("\n\nThe array is :\n");
    for(i=0;i<T;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}
