#include <stdio.h>
#define UPPER(x)(x>=65&&x<=90?1:0)
#define LOWER(x)(x>=97&&x<=122?1:0)
#define ALPHA(x)(UPPER(x)||LOWER(x))
#define BIG(x,y)(x>y?x:y)
int main() 
{
    char ch;
    int y,a,b;
    printf("Enter any character :");
    scanf("%c",&ch);
    if(UPPER(ch)==1){
        printf("You have entered a upper case alphabet.");
    }
    if(LOWER(ch)==1){
        printf("You have entered a lower case alphabet.");
    }
    if(ALPHA(ch)==0){
        printf("You have entered a character other than english alphabet.");
    }
    printf("\nEnter two number :");
    scanf("%d %d",&a,&b);
    y=BIG(a,b);
    printf("Bigger number is :%d",y);
    return 0;
}
