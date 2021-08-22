#include <stdio.h>

int main() 
{
    float bmi,hgt,wgt;
    printf("Enter your height and weight : ");
    scanf("%f %f",&wgt,&hgt);
    bmi=wgt/(hgt*hgt);
    printf("BMI=%f",bmi);
    if(bmi<15){
        printf("STARVASTION");
    }
    else if((bmi>15.1)&&(bmi<17.5)){
        printf("ANOREXIC");
    }
    else if((bmi>17.6)&&(bmi<18.5)){
        printf("UNDEREWEIGHT");
    }
    else if((bmi>18.6)&&(bmi<24.9)){
        printf("IDEAL");
    }
    else if((bmi>25)&&(bmi<25.9)){
        printf("OVERWEIGHT");
    }
    else if((bmi>30)&&(bmi<30.9)){
        printf("OBESE");
    }
    else
    printf("MORBIDLY OBESE");
    return 0;
}
