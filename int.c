#include <stdio.h>
int main() 
{
    float num,diffrence;
    int int_num;
    printf("Enter a number :");
    scanf("%f",&num);
    int_num=num;
    diffrence=num-int_num;
    if(diffrence==0){
        printf("The number is int type.");
    }
    else{
        printf("The number if floting point.");
    }
    return 0;
}
