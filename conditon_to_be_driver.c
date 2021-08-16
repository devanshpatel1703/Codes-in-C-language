#include <stdio.h>

int main() 
{
    char sex,ms;
    int age;
    printf("relationship (M or U),Enter sex(M or F),age=");
    scanf("%c %c %d",&ms,&sex,&age);
    if((ms=='M')||(ms=='U'&&sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25))
        printf("You can be a driver in the company");
    else
        printf("You can't be a driver");
    return 0;    
    }
