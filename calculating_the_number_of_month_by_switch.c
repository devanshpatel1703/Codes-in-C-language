#include <stdio.h>
int main() 
{
    int a;
    printf("Enter a number from 1 to 12 to get the month :");
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("The %d Month is January",a);
        break;
        case 2: printf("The %d Month is Feburary",a);
        break;
        case 3: printf("The %d Month is March",a);
        break;
        case 4: printf("The %d Month is April",a);
        break;
        case 5: printf("The %d Month is May",a);
        break;
        case 6: printf("The %d Month is June",a);
        break;
        case 7: printf("The %d Month is July",a);
        break;
        case 8: printf("The %d Month is August",a);
        break;
        case 9: printf("The %d Month is September",a);
        break;
        case 10: printf("The %d Month is October",a);
        break;
        case 11: printf("The %d Month is November",a);
        break;
        case 12: printf("The %d Month is December",a);
        break;
        default: printf("Your choice of month is not in range of 1 to 12");
    }
    return 0;
}    
