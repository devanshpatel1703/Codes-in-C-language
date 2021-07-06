// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int a,i=1,t;
    printf("Enter the number of which table you want to print :");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        t=a*i;
        printf("%d x %d = %d\n",a,i,t);
    }
    return 0;
}
