#include<stdio.h>
int main()
{
    int population = 100000;
    int year = 10;

    for(int i = 1;i <= year;i++) {
        population = population + (population/10);
        printf("population after each decade = %d\n",population);
    }

    return 0;
}