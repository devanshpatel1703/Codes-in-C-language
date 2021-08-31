#include <stdio.h>
#include <math.h>
int main() 
{
    int n1,n2,n3,n4,n5,pos=0,neg=0;
    printf("Enter number 1 :");
    scanf("%d",&n1);
    if(n1>0){
        pos++;
    }
    else{
        neg++;
    }
    printf("Enter number 2 :");
    scanf("%d",&n2);
    if(n2>0){
        pos++;
    }
    else{
        neg++;
    }
    printf("Enter number 3 :");
    scanf("%d",&n3);
    if(n3>0){
        pos++;
    }
    else{
        neg++;
    }
    printf("Enter number 4 :");
    scanf("%d",&n4);
    if(n4>0){
        pos++;
    }
    else{
        neg++;
    }
    printf("Enter number 5 :");
    scanf("%d",&n5);
    if(n5>0){
        pos++;
    }
    else{
        neg++;
    }
    printf("Number of positive numbers are :%d\nNumber of negative numbers are :%d",pos,neg);
    return 0;
}
