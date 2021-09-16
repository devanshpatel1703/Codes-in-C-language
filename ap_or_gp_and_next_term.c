#include <stdio.h>
#include <math.h>
int main() 
{
    float a,b,c,d,c_r,term;
    printf("Enter 1 no. :");
    scanf("%f",&a);
    printf("Enter 2 no. :");
    scanf("%f",&b);
    printf("Enter 3 no. :");
    scanf("%f",&c);
    printf("Enter 4 no. :");
    scanf("%f",&d);
    if((a+c==2*b)&&(b+d==2*c)){
        printf("The series is AP.\nThe 5th term is :%.1f",d+b-a);
    }
    else if((c*a==b*b)&&(b*d==c*c)){
        c_r=b/a;
        term=a*pow(c_r,4);
        printf("The series is GP.\nThe 5th term is :%f",term);
    }
    else{
        printf("\nThe terms are nither is GP nor in AP.");
    }
    printf("\nNow go and fuck yourself.");
    return 0;
}
