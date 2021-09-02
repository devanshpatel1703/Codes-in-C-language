#include <stdio.h>
#include <math.h>
int main() 
{
    int i=1,p,j=-1;
    float n;
    printf("Positive powers of 2 :\n");
    for(i=1;i<=10;i++){
        p=pow(2,i);
        printf("2 ^ %d = %d\n",i,p);
    }
    printf("Negative powers of 2 :\n");
    for(j=-1;j>=-10;j--){
        n=pow(2,j);
        printf("2 ^ %d = %f\n",j,n);
    }
    return 0;
}
