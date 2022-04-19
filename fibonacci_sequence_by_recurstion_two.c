#include <stdio.h>
#include <math.h>
int fcn(int,int,int);
int main() 
{
    int n,a=0,b=1;
    printf("Enter number till you want febinacci :");
    scanf("%d",&n);
    fcn(a,b,n);
}
int fcn(int a,int b,int n)
{
    if(n==0){
        return 0;
    }
    int c=a+b;
    printf("%d ",c);
    fcn(b,c,n-1);
    return 0;
}
