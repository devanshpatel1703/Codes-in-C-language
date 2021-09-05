#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i,r;
    printf("Enter a divisor :");
    scanf("%d",&n);
    printf("Enter the value of remainder you want :");
    scanf("%d",&r);
    printf("All numbers between 1 and 1000 which give remainder %d on dividing by %d are :\n",r,n);
    for(i=1;i<=1000;i++){
        if(i%n==r){
        printf("%d\n",i);
        }
    }
    return 0;
}
