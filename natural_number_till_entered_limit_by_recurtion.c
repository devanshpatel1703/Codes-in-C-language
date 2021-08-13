
#include <stdio.h>
void pnt(int,int);
int main() 
{
    int num,i=1;
    printf("Enter any number till you want till print natural numbers :");
    scanf("%d",&num);
    pnt(num,i);
    return 0;
}
void pnt(int z,int i)
{
    if(i<=z){
        printf("%d ",i);
        pnt(z,i+1);
    }
}
