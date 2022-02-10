#include<stdio.h>
int main()
{
    int n,k,i,amnt,sum_f=0,not_eaten,new_amnt;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum_f+=a[i];
    }
    scanf("%d",&amnt);
    not_eaten=sum_f-a[k];
    new_amnt=not_eaten/2;
    if(amnt!=new_amnt){
        printf("%d",amnt-new_amnt);
    }
    else{
        printf("Bon Appetit");
    }
    return 0;
}
