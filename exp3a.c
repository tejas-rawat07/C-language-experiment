#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b) > c && (a+c) > b && (b+c) > a) {
       printf("triangle is valid\n");
       if(a == b && b == c) {
        printf("trianglr is equilateral\n");
       }
       else if(a == b || b == c || a == c) {
        printf("the triangle is isosceles\n");
       } 
       else {
        printf("the triangle is scalene\n");
       }
       if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) {
        printf("the triangle is rightangle\n");
       }
       else {
        printf("triangle is not rightangled\n");
       }
    }
    return 0;
}