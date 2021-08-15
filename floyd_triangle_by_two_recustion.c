// Online C compiler to run C program online
#include <stdio.h>
void pat(int);
int num(int);
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
        num(n);
        }
        printf("\n");
        pat(n-1);
    
}
int num(int n)
{
    if(n>0){
        printf("%d",n);
        num(n-1);
    }
}
