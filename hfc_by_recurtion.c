#include <stdio.h>
int hcf(int,int);
int main()
{
    int n1,n2,gcd,t;
    printf("Enter 2 numbers to find HCF :");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
    gcd=hcf(n1,n2);
    }
    else{
    gcd = hcf(n2,n1);
    }
    printf("The HCF is :%d",gcd);
    return 0;
}
int hcf(int n1,int n2)
{
    if(n1%n2==0){
        return(n2);
    }
    r=n1%n2;
    hcf(n2,r);
    
}


