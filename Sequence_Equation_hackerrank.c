#include<stdio.h>
int main()
{
    int n,i,pos,j,k,ans;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            if(a[j]==i){
                pos=j;
                pos++;
            }
            for(k=0;k<n;k++){
                if(a[k]==pos){
                    ans=k+1;
                    break;
                }
            }
        }
        printf("%d\n",k+1);
    }
    return 0;
}
