#include <stdio.h>
#include <string.h>
int main() 
{
    int n,i,t;
    printf("Enter the size of string :");
    scanf("%d",&n);
    char s[n];
    printf("Enter the string :");
    scanf("%s",s);
    for(i=0;i<n/2;i++){
        t=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t;
    }
    printf("\nThe reverse string is : %s",s);
    return 0;
}
