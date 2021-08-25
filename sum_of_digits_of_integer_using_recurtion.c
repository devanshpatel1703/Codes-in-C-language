#include <stdio.h>
int sum(int);
int main() 
{
    int num,o;
    printf("Enter any number which you want to count digits :");
    scanf("%d",&num);
    o=sum(num);
    printf("The sum of digits are :%d",o);
    return 0;
}
int sum(int n)
{
    if(n!=0){
        return (n%10+sum(n/10));
    }
}

