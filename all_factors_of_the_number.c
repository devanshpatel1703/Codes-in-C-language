#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i;
    printf("Enter any number to find its all factors :");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
