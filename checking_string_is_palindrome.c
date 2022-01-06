#include <stdio.h>
#include <string.h>
int main() 
{
    int n,i,t;
    printf("Enter the size of string :");
    scanf("%d",&n);
    char s[n],s2[n];
    printf("Enter the string :");
    scanf("%s",s);
    for(i=0;i<n;i++){
        s2[i]=s[i];
    }
    for(i=0;i<n/2;i++){
        t=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t;
    }
    
    for(i=0;i<n;i++){
        if(s2[i]!=s[i]){
            printf("String is not a palindome.");
            return 0;
        }
    }
    printf("\nString is palindrome.");
    return 0;
}
