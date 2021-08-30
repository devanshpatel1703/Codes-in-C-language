#include <stdio.h>
int main() 
{
    int p,q,r,s;
    printf("Enter P:");
    scanf("%d",&p);
    printf("Enter Q:");
    scanf("%d",&q);
    printf("Enter R:");
    scanf("%d",&r);
    printf("Enter S:");
    scanf("%d",&s);
    if((p%2==0)&&(q>r)&&(r>p)&&((r+s)>(p+q))){
        printf("You entered Correct values");
    }
    else printf("You Entred wrong Values");
    return 0;
}
