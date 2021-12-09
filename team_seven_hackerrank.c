#include <stdio.h>
#include <math.h>
int main()
{
    int n,count=0,i,j,k,l;
    printf("Enter the number of test cases you want :");
    scanf("%d",&n);
    for(l=1;l<=n;l++){
        scanf("%d %d %d",&i,&j,&k);
        if((i==1&&j==1)||(j==1&&k==1)||(i==1&&k==1)){
            count++;
        }
    }
    printf("Total questions attempted are : %d",count);
    return 0;
}
