#include <stdio.h>
void swap(int *,int *,int *);
int main()
{
    int x,y,z;
    printf("Enter X :");
    scanf("%d",&x);
    printf("Enter Y :");
    scanf("%d",&y);
    printf("Enter Z :");
    scanf("%d",&z);
    swap(&x,&y,&z);
    printf("X :%d\nY :%d\nZ :%d\n",x,y,z);
}
void swap(int *a,int *b,int *c)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
}
