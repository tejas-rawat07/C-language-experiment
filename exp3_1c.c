#include<stdio.h>
int main()
{
    int i,j,k = 1;
    int rows = 3;

    for(i = 1;i <= rows;i++) {
        for(j = 1;j <= rows;j++) {
            printf(" ");
        }
        for(j = 1;j <= i;j++) {
            printf("%d",k++);
        }
        printf("\n");

    }

    return 0;
}