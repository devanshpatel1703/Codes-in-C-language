#include <stdio.h>
int main() 
{
    long int lim,a=0,b=1,i,c;
    printf("Enter the number of terms you want :");
    scanf("%d",&lim);
    printf("%d %d ",a,b);
    for(i=3;i<=lim;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
