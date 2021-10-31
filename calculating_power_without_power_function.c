#include <stdio.h>
#include <math.h>
int main() 
{
    int n,a,p=1,count=0;
    printf("Enter a number to check its power :");
    scanf("%d",&a);
    printf("Enter a exponent :");
    scanf("%d",&n);
    while(a>=p){
        p=p*n;
        count++;
    }
    printf("%d is %d power of %d",a,count,n);
    return 0;
}
