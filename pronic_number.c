#include <stdio.h>
int main()
{
    printf("Enter the number to check if its pronic or not :");
    int n,temp=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(i*(i+1)==n){
            printf("Yes its pronic number.");
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("No its not a pronic number.");
    }
    return 0;
}
