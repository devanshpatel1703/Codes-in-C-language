#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,i,j,count=0;
    scanf("%d %d",&n,&k);
    int *ptr;
    ptr = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i<j) && (ptr[i]+ptr[j])%k==0){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
