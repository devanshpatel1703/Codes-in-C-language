#include <stdio.h>
#include <math.h>
int factorial1();
int factorial2();
int factorial3(int);
int factorial4(int);
int main()
{
    int choice,result,n;
    printf("Enter the choice which you want to get factoral.");
    printf("\n1. No arguments passed and no return value.");
    printf("\n2. No arguments passed but a return value.");
    printf("\n3. Argument passed but no return value.");
    printf("\n4. Argument passed and a return value.");
    printf("\nYour choice here :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            factorial1();
            break;
        case 2:
            result=factorial2();
            printf("The factrorial is : %d",result);
            break;
        case 3:
            printf("Enter the number which you want factorial  :");
            scanf("%d",&n);
            factorial3(n);
            break;
        case 4:
            printf("Enter the number which you want factorial  :");
            scanf("%d",&n);
            result=factorial4(n);
            printf("The factorial is : %d",result);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
int factorial1()
{
    int n,i,fact=1;
    printf("Enter the number which you want factorial  :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial is : %d",fact);
    return 0;
}
int factorial2()
{
    int n,i,fact=1;
    printf("Enter the number which you want factorial  :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return (fact);
}
int factorial3(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("The factorial is : %d",fact);
    return 0;
}
int factorial4(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return (fact);
}
