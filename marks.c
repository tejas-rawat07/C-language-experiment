#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    int grade;
    printf("enter your m70arks");
    scanf("%d %d %d %d %d",&sub1 , &sub2 ,&sub3 ,&sub4 ,&sub5);
    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    grade=total/5;
    printf("%d",grade);
    if (grade>=85)
    {
        printf("your grade is O");
    }
    else if (grade>=75)
    { 
        printf("your grade is A");
    }
    else if (grade>=60)
    {
        printf("your grade is B");
    }
    else if (grade>=40)
    {
         printf("your grade is c");
    }
    else if (grade>35);
    {
        printf("your grade is D");
    }
    return 0;
}