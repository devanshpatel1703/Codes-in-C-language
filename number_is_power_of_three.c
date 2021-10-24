#include <stdio.h>
int main()
{
    int num,i,power=1,count=0;
    printf("Enter a number to check if it is a power of 3 :");
    scanf("%d",&num);
    while(power<num){
        power=power*3;
        count++;
    }
    if(power==num){
        printf("Yes");
        printf("\n%d is %d power of three.",num,count);
    }
    else{
        printf("No, It is not any power of 3");
    }
    return 0;
}
