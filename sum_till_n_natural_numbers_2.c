#include <stdio.h>
int sum(int);
int main() 
{
    int num,q;
    printf("Enter the number till you wsant the sum :");
    scanf("%d",&num);
    q=sum(num);
    printf("The sum from 1 to %d is:%d",num,q);

    return 0;
}
int sum(int n)
{
    if(n!=0){
        return(n+sum(n-1));
    }
    
}
