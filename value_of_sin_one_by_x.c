#include <stdio.h>
#include <math.h>
int main() 
{
    float x,sine;
    printf("Enter value of x :");
    scanf("%f",&x);
    if(x!=0){
        sine=sin(1/x);
        printf("The value of sine 1/%f is %f",x,sine);
    }
    else{
        printf("X can't be zero you bitch");
    }
    return 0;
}
