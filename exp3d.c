#include<stdio.h>
int main()
{
    int year,i,day = 1;
    printf("enter the year");
    scanf("%d",&year);

    for (i = 1;i <= year;i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            day+=2;    
        }
        else {
            day+=1;
        }


    }

    day = day % 7;
    printf("on 01/01/%d, it was",year);
    switch(day) {
        case 0: printf("sunday"); break;
        case 1: printf("monday"); break;
        case 2: printf("tuesday"); break;
        case 3: printf("wednesday"); break;
        case 4: printf("thursday"); break;
        case 5: printf("friday"); break;
        case 6: printf("saturday"); break;
    }

    return 0;
}