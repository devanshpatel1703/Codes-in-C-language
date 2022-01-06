#include <stdio.h>
#include <string.h>
int main() 
{
    int n,i,temp,num=0;
    char ch;
    printf("Enter the size of string :");
    scanf("%d",&n);
    char s[n];
    printf("Enter the numeric only string :");
    scanf("%s",s);
    for(i=0;i<n;i++){
        temp=s[i];
        num=num*10+temp-48;
    }
    printf("The integer is : %d",num);
    return 0;
}
