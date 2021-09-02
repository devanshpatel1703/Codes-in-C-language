#include <stdio.h>
int main() 
{
    int a,min,max;
    printf("Enter a :");
    scanf("%d",&a);
    min=a;
    max=a;
    while(a!=0){
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
        printf("Enter next a :");
        scanf("%d",&a);
    }
    printf("Largest :%d\nSmallest :%d",max,min);
    return 0;
}
