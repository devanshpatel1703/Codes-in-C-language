#include<stdio.h>
int main()
{
    int n,i,count=0,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int c[max+1];
    for(i=0;i<=max;i++){
        c[i]=0;
    }
    for(i=0;i<n;i++){
        c[a[i]]++;
    }
    int max2;
    max2=c[0];
    for(i=0;i<=max;i++){
        if(c[i]>max2){
            max2=c[i];
        }
    }
    for(i=0;i<=max;i++){
        if(c[i]==max2){
            count++;
            temp=i;
        }
    }
    if(count==1){
        printf("%d",temp);
    }
    if(count>1){
        int r[count],p=0;
        for(i=0;i<=max;i++){
            if(c[i]==max2){
                r[p]=i;
                p++;
            }
        }
        int min;
        min=r[0];
        for(i=0;i<count;i++){
            if(r[i]<min){
                min=r[i];
            }
        }   
        printf("%d",min);
    }
    return 0;
}
