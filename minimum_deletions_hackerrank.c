#include<stdio.h>
int main()
{
    int n,i,max,max2;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    max++;
    int c[max];
    for(i=0;i<max;i++){
        c[i]=0;
    }
    for(i=0;i<n;i++){
        c[a[i]]++;
    }
    max2=c[0];
    for(i=1;i<max;i++){
        if(c[i]>max2){
            max2=c[i];
        }
    }
    printf("Answer : %d",n-max2);
}
