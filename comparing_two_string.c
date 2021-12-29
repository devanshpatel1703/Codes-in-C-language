#include <stdio.h>
int main() 
{
    int n,i,m;
    printf("Enter the size of string you want to enter :");
    scanf("%d",&n);
    char array1[n];
    printf("Enter the string :");
    scanf("%s",array1);
    printf("Enter the size of string you want to concentate :");
    scanf("%d",&m);
    char array2[m];
    printf("Enter the string :");
    scanf("%s",array2);
    if(m!=n){
        printf("Strings are not equale.");
        return 0;
    }
    else{
        for(i=0;i<n;i++){
            if(array1[i]!=array2[i]){
                printf("Strings are not equale.");
                return 0;
            }
        }
    }
    printf("Yes the strings are exatly same.");
    return 0;
}
