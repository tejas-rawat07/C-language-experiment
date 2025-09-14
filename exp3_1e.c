#include<stdio.h>
int main()
{
    int l;
    printf("enter limit");
    scanf("%d",&l);

    int max = l * l * l;

    for(int a = 1;a <= l;a++) {
        for(int b = a+1;b <= l;b++) {
            for(int c = a;c <= l;c++) {
                for(int d = c+1;d <= l;d++) {
                    int sum1 = a*a*a + b*b*b;
                    int sum2 = c*c*c + d*d*d;

                    if(sum1 == sum2 && sum1 <= max) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",sum1,a,b,c,d);
                    }
                }
            
       
            }
        }
    }
    return 0;
}