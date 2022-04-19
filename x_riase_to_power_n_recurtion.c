#include <stdio.h>
#include <math.h>
int power(int,int,int);
int main() 
{
    int n,x,a=1;
    printf("Enter the number you want to calculate power :");
    scanf("%d",&x);
    printf("Enter power of %d you want to raise :",x);
    scanf("%d",&n);
    printf("Answer : %d",power(x,n,a));
}
int power(int x,int n,int a)
{
    if(n==0){
        return 1;
    }
    return x*power(x,n-1,a);
}
