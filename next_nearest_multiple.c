#include <stdio.h>
int main() 
{
    int i,j,r;
    printf("Enter the number which you want to round off :");
    scanf("%d",&i);
    printf("Enter the number which you provide neartest multiple :");
    scanf("%d",&j);
    for(r=i;;r++){
        if(r%j==0){
            printf("The next nearest multiple is : %d",r);
            return 0;
        }
    }
    return 0;
}
