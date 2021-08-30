#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("Enter the three sides of triagle :");
    scanf("%d %d %d",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)){
        printf("Triangle is possible\n");
        printf("Perimter of the triangle is %d",a+b+c);
    }
    else{
        printf("Triangle is not possible");
    }
    return 0;
}
