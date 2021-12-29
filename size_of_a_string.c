#include <stdio.h>
int main() 
{
    char array[1000];
    char ch;
    int i=0;
    printf("Enter a string :");
    scanf("%s",&array);
    while(array[i]!='\0'){
        i++;
    }
    printf("The length of the string is : %d",i);
    return 0;
}
