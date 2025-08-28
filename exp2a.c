#include<stdio.h>
int main()
{
    int length,width;
    printf("enter parameters");
    scanf("%d %d,&length,&width");
    int area= length*width;
    printf("area of rectangle is %d\n",area);
    int perimeter= (length+width)*2;
    printf("perimeter of rectangle is %d\n",perimeter);
    return 0;

}