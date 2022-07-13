#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i,j;
    printf("Enter the limit till which you want prime numbers :");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++){
        a[i-1]=i;
    }
    for(i=1;i<=n;i++){
        int check=a[i];
        for(j=i+1;j<n;j++){
            if(a[j]>0&&a[i]>0){
                if(a[j]%check==0){
                    a[j]=0;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>0)
        printf("%d\n",a[i]);
    }
    return 0;
}
