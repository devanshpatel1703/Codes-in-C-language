#include <stdio.h>

#include <math.h>

int main() 

{

    int i,sum=0,num;

    printf("Enter a number to chjeck if its a perfect number or not :");

    scanf("%d",&num);

    for(i=1;i<num;i++){

        if(num%i==0){

            sum=sum+i;

        }

    }

    (sum==num)?printf("Yes its a perfect number"):printf("No its not a perfect number");

    return 0;

}
