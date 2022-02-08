#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,j,pri_sum=0,sec_sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(i==j){
                pri_sum=pri_sum+a[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j==n-1){
                sec_sum=sec_sum+a[i][j];
            }
        }
    }
    pri_sum=pri_sum-sec_sum;
    if(pri_sum<0){
        pri_sum=pri_sum*(-1);
    }
    printf("%d",pri_sum);
    return 0;
}
