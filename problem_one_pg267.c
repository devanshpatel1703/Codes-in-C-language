#include <stdio.h>
#include <string.h>
int main() 
{
    int n,i,t,p,e;
    char ch;
    printf("Enter the size of string :");
    scanf("%d",&n);
    char s[n];
    printf("Enter the string :");
    scanf("%s",s);
    printf("Enter the positon and characters you want to cut :");
    scanf("%d %d",&p,&e);
    int j=p;
    char bs[e];
    for(i=0;i<e;i++){
        bs[i]=s[j];
        j++;
    }
    printf("\nThe result string is : %s",bs);
    return 0;
}
