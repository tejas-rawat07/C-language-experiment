#include<stdio.h>
int main()
{
    char choice = 'y';
    int pos = 0, neg = 0, zero = 0 , num = 0;


     while(choice == 'y' || choice == 'Y') {
        printf("enter the number");
        scanf("%d",&num);

        if(num > 0) {
            pos++;
        }
        else if(num == 0) {
            zero++;
        }
        else {
            neg++;
        }
        printf("do you want to continue ? (y/n) :");
        scanf(" %c",&choice);
     }
        if(choice == 'y' || choice == 'Y') {
        choice = 'y';
        }
        else if(choice == 'n' || choice == 'N') {
        choice = 'n';
        }

    printf("positive  number %d\n",pos);
    printf("negative number%d\n",neg);
    printf("zeroes%d\n",zero);
     

     return 0;
}