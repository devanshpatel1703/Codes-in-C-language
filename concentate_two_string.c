#include <stdio.h>
int main() 
{
    int n,i,m,j,sum;
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
    sum=m+n;
    char array3[sum];
    for(i=0;i<n;i++){
        array3[i]=array1[i];
    }
    j=n;
    for(i=0;i<m;i++){
        array3[j]=array2[i];
        j++;
    }
    array3[sum]='\0';
    printf("\nconcatenate array is :%s",array3);
    return 0;
}
