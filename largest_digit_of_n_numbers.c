#include <stdio.h>
int main()
{
    int n, sum=0,i;
    printf("Enter number to find its largest digit = ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum=sum*10+9;
    }
    printf("the largest digit of %d digits is %d",n,sum);
    return 0;
}
