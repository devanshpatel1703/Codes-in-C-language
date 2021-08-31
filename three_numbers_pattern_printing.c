#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i=1,j=1;
    printf("Enter the number of lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d %d %d\n",j,j+1,j+2);
        j=j+3;
    }
    return 0;
}
