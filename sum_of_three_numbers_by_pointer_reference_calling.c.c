#include <stdio.h>
int sum(int*,int*,int*);
int main() 
{   
    int a,b,c,s;
    printf("Enter three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    s=sum(&a,&b,&c);
    printf("Sum is :%d",s);
    return 0;
}
int sum(int *a,int *b,int *c){
    return(*a+*b+*c);
}
