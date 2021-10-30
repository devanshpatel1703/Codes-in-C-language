#include <stdio.h>

int main() 
{
    int num,t=0,n,i;
    printf("Enter any number to numtiply it :");
    scanf("%d",&num);
    printf("Enter any number by which you have to numtiply :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        t=t+num;
    }
    printf("The miltipliation is :%d",t);
    return 0;
}
