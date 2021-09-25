#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter any upper case alphabet :");
    scanf("%c",&ch);
    if(ch==65||ch== 69||ch== 73 ||ch==79||ch== 85||ch==97||ch==101||ch==105||ch==111||ch==117){
        printf("Yes it is a Vowel");
    }
    else
    {
        printf("It is a consonent");
    }
    return 0;
}
