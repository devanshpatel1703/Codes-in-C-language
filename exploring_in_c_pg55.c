#include <stdio.h>
int main() 
{
    int customer,product;
    float amount;
    printf("Choose which type of costomer you are :\n");
    printf("1.For Industrial purchase.\n");
    printf("2.For Governmental purchase.\n");
    printf("3.For University purchase.\n");
    printf("Your type here : ");
    scanf("%d",&customer);
    printf("Choose the type of product you want.\n");
    printf("1.For 8-bit.\n");
    printf("2.For 16-bit.\n");
    printf("3.For 32-bit.\n");
    printf("Your purchase type here : ");
    scanf("%d",&product);
    printf("Enter the amount of purchase :");
    scanf("%f",&amount);
    if(product==3){
        if(amount<50000){
            if(customer==1){
                printf("The amount you have to pay is : %.1f",amount*0.05+amount);
            }
            else if(customer==2){
                printf("The amount you have to pay is : %.1f",amount*0.065+amount);
            }
            else if(customer==3){
                printf("The amount you have to pay is : %.1f",amount*0.075+amount);
            }
        }
        else if(amount>=50000 && amount<100000){
            if(customer==1){
                printf("The amount you have to pay is : %.1f",amount*0.075+amount);
            }
            else if(customer==2){
                printf("The amount you have to pay is : %.1f",amount*0.085+amount);
            }
            else if(customer==3){
                printf("The amount you have to pay is : %.1f",amount*0.075+amount);
            }
        }
        else if(amount>=100000){
            if(customer==1){
                printf("The amount you have to pay is : %.1f",amount*0.1+amount);
            }
            else if(customer==2){
                printf("The amount you have to pay is : %.1f",amount*0.1+amount);
            }
            else if(customer==3){
                printf("The amount you have to pay is : %.1f",amount*0.075+amount);
            }
        }
    }
    else if(product==2){
        if(amount<10000){
            printf("You get no discount at all.");
        }
        else if(amount>=10000){
            if(customer==1){
                printf("The amount you have to pay is : %.1f",amount*0.5+amount);
            }
            else if(customer==2){
                printf("The amount you have to pay is : %.1f",amount*0.6+amount);
            }
            else if(customer==3){
                printf("The amount you have to pay is : %.1f",amount*0.5+amount);
            }
        }
    }
    else{
        printf("The amount you have to pay is : %.1f",amount*0.1+amount);
    }
    return 0;
}
