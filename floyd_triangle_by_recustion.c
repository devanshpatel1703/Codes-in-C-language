#include <stdio.h>
void pat(int);
int main() 
{   
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    pat(n);
    return 0;
}
void pat(int n)
{
    int i=1;
    if(n==0){
        return;
    }
    else{
        for(i=1;i<=n;i++){
            printf("%d",i);
        }
        printf("\n");
        pat(n-1);
    }
}
