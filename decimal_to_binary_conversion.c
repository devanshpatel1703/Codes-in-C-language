#include <stdio.h>
int main() 
{
    int i=0,num,j,temp;
    int a[100];
    printf("Enter any number :");
    scanf("%d",&num);
    while(num>0){
        a[i]=num%2;
        num/=2;
        i++;
    }
    for(j=0;j<i/2;j++){
        temp=a[j];
        a[j]=a[i-j-1];
        a[i-j-1]=temp;
    }
    printf("The binary is :\n");
    for(j=0;j<i;j++){
        printf("%d ",a[j]);
    }
    return 0;
}
