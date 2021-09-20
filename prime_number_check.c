#include <stdio.h>
#include <math.h>
int main() 
{
    int i=1,a,j=1,t;
    printf("Enter any number :");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            t=0;
            break;
        }
        else{
            t=1;
        }
    }
    if(t==1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
