#include <stdio.h>
int main() 
{
    int r,i=1,count=0;
    printf("Enter a range till you want the even numbers :");
    scanf("%d",&r);
    for(i=1;i<r;i++){
        if(i%2==0){
            printf("%d ",i);
            count++;
        }
    }
    printf("\nTheir are %d even numbers between 1 and %d.",count,r);
    return 0;
}    
