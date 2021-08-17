#include <stdio.h>

int main() 
{
    int a,b,c;
    printf("Enter any three numbers A, B, C :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("A is largest");
        }
        else if(a<c){
            printf("C is largest");
        }
    }
    else if((b>a)&&(b>c)){
        printf("B is largest");
    }    
    else {
        printf("Their is no difference between any of 2 numbers");
    }
    return 0;
}
