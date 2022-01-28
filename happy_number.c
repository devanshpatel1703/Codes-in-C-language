#include <stdio.h>
#include <math.h>
int sqsum(int);
int main() 
{
    int num,check;
    printf("Enter the number :");
    scanf("%d",&num);
    check=sqsum(num);
    while(check>9){
        num=check;
        check=sqsum(num);
    }
    if(check==1){
        printf("\nYes");
    }
    else{
        printf("\nNo");
    }
    return 0;
}
int sqsum(int n)
{
    int sum=0;
    while(n!=0){
        sum=sum+pow(n%10,2);
        n/=10;
    }
    return(sum);
}
