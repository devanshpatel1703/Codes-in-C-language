#include <stdio.h>
int fibo(int,int,int);
int main() 
{
    int old=0,current=1;
    printf("%d %d ",old,current);
    fibo(old,current,23);
    return 0;
}
int fibo(int old,int current,int i)
{
    int newterm;
    if(i>0){
        newterm=old+current;
        printf("%d ",newterm);
        i=i-1;
        fibo(current,newterm,i);
    }
}
