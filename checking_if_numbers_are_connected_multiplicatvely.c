#include <stdio.h>
int main() 
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    if(b>a){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a%b==0){
        printf("Yes they are connected multiplicatively\n%d is %d multiple of %d",a,a/b,a);
    }
    else{
        printf("They both are not mutually connected with multiplication");
    }
    return 0;
}
