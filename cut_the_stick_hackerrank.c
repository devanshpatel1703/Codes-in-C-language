#include<stdio.h>
int main()
{
    int n,i,sum=0,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    while(sum>0){
        int count=0;
        for(i=0;i<n;i++){
            if(a[i]>0){
                min=a[i];
            }
        }
        for(i=0;i<n;i++){
            if(a[i]<min&&a[i]>0){
                min=a[i];
            }
        }
        for(i=0;i<n;i++){
            if(a[i]>0){
                a[i]=a[i]-min;
                count++;
            }
        }
        sum=0;
        printf("%d\n",count);
        for(i=0;i<n;i++){
            sum=sum+a[i];
        }
    }
    return 0;
}
