#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i=1,max=0,count=0,position;
    printf("Enter 6 integer values :");
    for(i=1;i<=6;i++){
        scanf("%d",&n);
        if(n>max){
            max=n;
            position=i;
        }
    }
    printf("The maximum number is :%d\nThe position is :%d",max,position);
    return 0;
}
