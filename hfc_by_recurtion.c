#include <stdio.h>
int hcf(int,int,int);
int main() 
{
    int n1,n2,gcd,r,t;
    printf("Enter 2 numbers to find HCF :");
    scanf("%d %d",&n1,&n2);
    if(n1<n2){
        t=n1;
        n1=n2;
        n2=t;
    }
    gcd=hcf(n1,n2,r);
    printf("The HCF is :%d",gcd);
    return 0;
}
int hcf(int n1,int n2,int r)
{
    if(n2%n1!=0){
        r=n2%n1;
        hcf(r,n1,n2%n1);
        return(r);
    }
}


