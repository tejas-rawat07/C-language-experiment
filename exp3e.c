#include<stdio.h>
int main()
{
    int l1,b1,l2,b2,l3,b3;
    int p1,p2,p3,max;

    printf("enter length and width of rectangle 1\n");
    scanf("%d %d",&l1,&b1);
    printf("enter length and width of rectangle 2\n");
    scanf("%d %d",&l2,&b2);
    printf("enter length and width of rectangle 3\n");
    scanf("%d %d",&l3,&b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    if(max == p1) {
        printf("rectangle 1 has highest perimeter\n");
    }
    else if(max == p2) {
        printf("rectangle 2 has highest perimeter\n");
    }
    else {
        printf("rectangle 3 has highest perimeter\n");
    }

    return 0;
}