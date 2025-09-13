#include<stdio.h>
int main()
{
    float kg,ht,bmi;
    printf("enter weight");
    scanf("%f",&kg);
    printf("enter height");
    scanf("%f",&ht);

    bmi = kg/(ht*ht);
    printf("bmi is %.2f\n",bmi);

    if(bmi < 15) {
        printf("starvation");
    }
    else if(bmi > 15 && bmi <= 17.5) {
        printf("anorexic");
    }
    else if(bmi > 17.5 && bmi <= 18.5) {
        printf("underweight");
    }
    else if(bmi > 18.5 && bmi <= 24.9) {
        printf("ideal");
    }
    else if(bmi > 24.9 && bmi <= 25.9) {
        printf("overweight");
    }
    else if (bmi > 25.9 && bmi <= 39.9) {
        printf("obese");
    }
    else {
        printf("morbidly obese");
    }

    return 0;
}