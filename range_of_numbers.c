// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n,min=10000,max=0,shit;
    printf("Enter the num of elements :");
    scanf("%d",&n);
    printf("Enter %d Numbers :",n);
    while(n>0){
        scanf("%d",&shit);
        if(min>shit){
            min=shit;
        }
        if(max<shit){
            max=shit;
        }
        n--;
    }
    printf("Range of numbers is :%d",max-min);
    return 0;
}
