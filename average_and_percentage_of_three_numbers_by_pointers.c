#include <stdio.h>
void avgper(int,int,int,float *,float *);
int main() 
{
    int n1,n2,n3;
    float a,p;
    printf("Enter the marks of 3 subjects :");
    scanf("%d %d %d",&n1,&n2,&n3);
    avgper(n1,n2,n3,&a,&p);
    printf("Average =%f\nPercentage =%f",a,p);
    return 0;
}
void avgper(int a,int b,int c,float *avg,float *per)
{
    *per=*avg=(a+b+c)/3;
}
