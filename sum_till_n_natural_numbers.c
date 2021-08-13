#include <stdio.h>
int sum(int,int);
int main() 
{
    int i=1,l,s;
    printf("Enter the number till you want sum :");
    scanf("%d",&l);
    s=sum(i,l);
    printf("the sum from %d to %d is :%d",i,l,s);
    return 0;
}
int sum(int i,int l)
{
    int f;
    if(l==1){
        return 1;
    }
    if(l>1){
        f=sum(i,l-1)+l;
        return(f);
    }
}
