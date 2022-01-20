#include <stdio.h>
int main() 
{
    int a[4];
    int i;
    int *p[4];
    printf("Enter the array.\n");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
        p[i]=&a[i];
    }
    printf("\nThe adress of each variable : ");
    for(i=0;i<4;i++){
        printf("%d ",&a[i]);
    }
    printf("\nThe array which contain adress : ");
    for(i=0;i<4;i++){
        printf("%d ",p[i]);
    }
    printf("\nThe adress of each variable of p array : ");
    for(i=0;i<4;i++){
        printf("%d ",&p[i]);
    }
    printf("\nThe elements by p array : ");
    for(i=0;i<4;i++){
        printf("%d ",*p[i]);
    }
}
