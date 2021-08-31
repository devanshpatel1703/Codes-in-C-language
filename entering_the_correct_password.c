#include <stdio.h>
#include <math.h>
int main() 
{
    int n,t=1;
    while(t){
        printf("Enter password :");//Password is 1234 ;)
        scanf("%d",&n);
        if(n==1234){
            printf("CONGRATULATIONS !! The password is correct.");
            t=0;
        }
        else{
            printf("Password is incorrect.Try again.\n");
            t=1;
        }
    }
    return 0;
}
