#include <stdio.h>
#include <math.h>
int fab(int,int);
int main() 
{
    int n,i=1;
    printf("Enter number :");
    scanf("%d",&n);
    fab(i,n);
}
int fab(int i,int n)
{
    if(i==n+1){
        return 0;
    }
    else{
        printf("%d\n",i);
        fab(i+1,n);
    }
}
